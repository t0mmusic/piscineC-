#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange( char *file_in ) {
	importCsv();
	importCompare(file_in);
}

BitcoinExchange::~BitcoinExchange() { }

void	BitcoinExchange::importCsv() {
	std::ifstream	file(CSV_FILE);
	std::string		line;

	std::string		date;
	std::string		val;
	int				idate;
	float			fval;
	while (std::getline(file, line))
	{
		date = line.substr(0, line.find(','));
		val = line.substr(line.find(',') + 1, line.length());
		try
		{
			std::stringstream ss(val);
			ss >> fval;
			idate = dateToInt(date);
			csv[idate] = fval;
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
	float		fval;
	int 		i = 0;
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
		std::stringstream sv(val);
		float	tmp;
		sv >> tmp;
		std::cout << date << " => " << val << " = " << tmp * bitcoin << std::endl;
		try
		{
			std::stringstream ss(val);
			ss >> fval;
		}
		catch (...)
		{
			// catches the first line of csv which can't be converted to a float
		}
	}
}

bool 	BitcoinExchange::validate_date( std::string date ) {
	std::string	validate;
	std::string saveDate = date;

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
		std::stringstream ss(validate);
		ss >> year;
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
		std::cout << "Error: Invalid year format => " << saveDate << std::endl;
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
		std::stringstream ss(validate);
		ss >> month;
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
		std::cout << "Error: Invalid month format => " << saveDate << std::endl;
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
		std::stringstream ss(date);
		ss >> day;
		const int month_len[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
		// throws exception if day is not valid for month
		if (day < 1 || day > month_len[month - 1])
		{
			throw std::invalid_argument("");
		}
	}
	catch (...)
	{
		std::cout << "Error: Invalid day format => " << saveDate << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::validate_input( std::string value ) {
	float val;
	
	for (size_t i = 0; i < value.length(); i++)
	{
		if (!isdigit(value[i]) && value[i] != '-' && value[i] != '.')
		{
			std::cout << "Error: not a number." << std::endl;
			return (false);
		}
	}
	std::stringstream ss(value);
	ss >> val;
	if (val < 0.0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (val > 999.9)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

int		BitcoinExchange::dateToInt( std::string date ) {
	int	year, month, day;
	std::string			tmp;

	tmp = date.substr(0, date.find('-'));
	std::stringstream sy(tmp);
	sy >> year;
	date.erase(0, date.find('-') + 1);
	tmp = date.substr(0, date.find('-'));
	std::stringstream sm(tmp);
	sm >> month;
	date.erase(0, date.find('-') + 1);
	std::stringstream sd(date);
	sd >> day;

	return ((year * 10000) + (month * 100) + day);
}

float	BitcoinExchange::findClosestDate( std::string date ) {
	int	compare = dateToInt(date);
	int	current = csv.begin()->first;
	
	if (compare < current)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (-1);
	}
	for(std::map<int, float>::iterator it = csv.begin(); it != csv.end(); ++it)
	{
		int	next = it->first;
		if (next == current)
		{
			continue ;
		}
    	if (compare >= current && compare < next)
		{
			return (it->second);
		}
		current = next;
	}
	return (csv.end()->second);
}
