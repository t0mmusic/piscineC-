#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }
BitcoinExchange::~BitcoinExchange() { }

void	BitcoinExchange::importCsv() {
	std::ifstream file(CSV_FILE);
	std::string	line;

	std::string	date;
	std::string	val;
	float	fval;
	while (std::getline(file, line))
	{
		date = line.substr(0, line.find(','));
		val = line.substr(line.find(',') + 1, line.length());
		try
		{
			fval = (float)std::stof(val);
			csv[date] = fval;
			dates.push_back(dateToInt(date));
		}
		catch (...)
		{
			// catches the first line of csv which can't be converted to a float
		}
	}
}

void	BitcoinExchange::importCompare( char *file_in ) {
	std::ifstream	file(file_in);
	std::string		line;

	std::string	date;
	std::string	val;
	float	fval;
	int i = 0;
	while (std::getline(file, line))
	{
		if (i == 0)
		{
			i++;
			continue ;
		}
		date = line.substr(0, line.find(' '));
		val = line.substr(line.find(' ') + 3, line.length());
		float bitcoin = findClosestDate(date);
		if (bitcoin < 0 || !validate_date(date) || !validate_input(val))
		{
			continue ;
		}
		std::cout << date << " => " << val << " = " << std::stof(val) * bitcoin << std::endl;
		try
		{
			fval = (float)std::stof(val);
		}
		catch (...)
		{
			// catches the first line of csv which can't be converted to a float
		}
	}
}

bool 	BitcoinExchange::validate_date( std::string date ) {
	std::string	validate;

	// Year
	int	year;
	try
	{
		// throws exception if no '-' character is found
		validate = date.substr(0, date.find('-'));
		// throws exception if year is not 4 characters long
		if (validate.length() != 4)
		{
			throw std::invalid_argument("");
		}
		// throws exception if string can't be converted to int
		year = std::stoi(validate);
		// throws exception if year is less than 1900
		if (year < 1900)
		{
			throw std::invalid_argument("");
		}
		// if no exception, remove year from string
		date.erase(0, date.find('-') + 1);
	}
	catch (...)
	{
		std::cout << "Error: Invalid year format => " << date << std::endl;
		return (false);
	}

	// Month
	int	month;
	try
	{
		// throws exception if no '-' character is found
		validate = date.substr(0, date.find('-'));
		// throws exception if year is not 2 characters long
		if (validate.length() != 2)
		{
			throw std::invalid_argument("");
		}
		// throws exception if string can't be converted to int
		month = std::stoi(validate);
		// throws exception if date range is invalid
		if (month < 1 || month > 12)
		{
			throw std::invalid_argument("");
		}
		// if no exception, remove year from string
		date.erase(0, date.find('-') + 1);
	}
	catch (...)
	{
		std::cout << "Error: Invalid month format => " << date << std::endl;
		return (false);
	}

	// Day
	int	day;
	try
	{
		if (date.length() != 2)
		{
			throw std::invalid_argument("");
		}
		// throws exception if string can't be converted to int
		day = std::stoi(date);
		const int month_len[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
		// throws exception if day is not valid for month
		if (day < 1 || day > month_len[month - 1])
		{
			throw std::invalid_argument("");
		}
	}
	catch (...)
	{
		std::cout << "Error: Invalid day format => " << date << std::endl;
		return (false);
	}
	// std::cout << year << "-" << month << "-" << day << std::endl;
	return (true);
}

bool	BitcoinExchange::validate_input( std::string value ) {
	float val;
	try
	{
		val = std::stof(value);
	}
	catch (...)
	{
		std::cout << "Error: not a number." << std::endl;
		return (false);
	}
	if (val < 0.0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (val > 999.0)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

int	BitcoinExchange::dateToInt( std::string date ) {
	int	year, month, day;

	year = stoi(date.substr(0, date.find('-')));
	date.erase(0, date.find('-') + 1);
	month = stoi(date.substr(0, date.find('-')));
	date.erase(0, date.find('-') + 1);
	day = stoi(date);

	return ((year * 10000) + (month * 100) + day);
}

float	BitcoinExchange::findClosestDate( std::string date ) {
	int	compare = dateToInt(date);
	int	current = *dates.begin();
	int	i = 0;
	
	if (compare < current)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (-1);
	}
	for(std::vector<int>::iterator it = dates.begin(); it != dates.end(); ++it)
	{
		int	next = *it;
		if (next == current)
		{
			continue ;
		}
    	if (compare >= current && compare < next)
		{
			break ;
		}
		current = next;
		i++;
	}
	int j = 0;
	float	ret = 0.0;
	for (std::map<std::string, float>::iterator it = csv.begin(); it != csv.end(); ++it)
	{
		if (j == i)
		{
			ret = it->second;
			break ;
		}
		j++;
	}
	return (ret);
}
