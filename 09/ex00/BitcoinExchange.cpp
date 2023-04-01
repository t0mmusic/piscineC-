#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	if (importCsv())
	{
		test_data();
	}
}

BitcoinExchange::BitcoinExchange( char *file_in ) {
	if (importCsv())
	{
		importCompare(file_in);
	}
}

BitcoinExchange::~BitcoinExchange() { }

BitcoinExchange::BitcoinExchange( const BitcoinExchange &cpy ) {
	csv = cpy.csv;
}

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &cpy ) {
	csv = cpy.csv;
	return (*this);
}

void	BitcoinExchange::test_data() {
	evaluate("2011-01-03 | 3");
	evaluate("2011-01-03 | 2");
	evaluate("2011-01-03 | 1");
	evaluate("2011-01-03 | 1.2");
	evaluate("2011-01-09 | 1");
	evaluate("2012-01-11 | -1");
	evaluate("2001-42-42");
	evaluate("2012-01-11 | 1");
	evaluate("2012-01-11 | 2147483648");
	evaluate("2012-01-11 | 214 123");
	evaluate("2012-01-11 | 2a");
	evaluate("");
	evaluate("2012-01-11");
	evaluate("2012-01-11 | 2");
	evaluate("2009-01-01 | 10");
	evaluate("2009-01-100 | 10");
	evaluate("abcdefg");
	evaluate("2020-02-02 | 3");
	evaluate("2020-02-02 | 3 HELLO WORLD");
	evaluate("2020-02-02 | 3.3.3.3.3.3.3.3.3");
}

bool	BitcoinExchange::exists(const char *name) {
	if (FILE *file = fopen(name, "r"))
	{
		fclose(file);
		return (true);
	}
	else
	{
		std::cout << "Error: File " << name << " could not be opened." << std::endl;
		return (false);
	}
}

bool	BitcoinExchange::importCsv() {
	std::string	filename = CSV_FILE;
	if (!exists(filename.c_str()))
	{
		return (false);
	}

	std::ifstream	file(CSV_FILE);
	std::string		line;

	std::string		date;
	std::string		val;
	int				idate;
	float			fval;
	bool			first = true;
	while (std::getline(file, line))
	{
		if (first)
		{
			first = false;
			continue ;
		}
		date = line.substr(0, line.find(','));
		val = line.substr(line.find(',') + 1, line.length());
		std::stringstream ss(val);
		ss >> fval;
		idate = dateToInt(date);
		csv[idate] = fval;
	}
	return (true);
}

void	BitcoinExchange::evaluate( std::string line ) {
	std::string	date;
	std::string	val;

	try
	{
		date = line.substr(0, line.find(' '));
		val = line.substr(line.find(' ') + 3, line.length());
		float bitcoin = findClosestDate(date);
		if (bitcoin < 0 || !validate_date(date) || !validate_input(val))
		{
			return ;
		}
		std::stringstream sv(val);
		float	tmp;
		sv >> tmp;
		std::cout << date << " => " << val << " * " << bitcoin << " = " << tmp * bitcoin << std::endl;
	}
	catch(...) // catches other formatting errors
	{
		std::cout << "Error: Format Invalid." << std::endl;
	}
}

void	BitcoinExchange::importCompare( char *file_in ) {
	if (!exists(file_in))
	{
		return ;
	}
	std::ifstream	file(file_in);
	std::string		line;

	std::string	date;
	std::string	val;
	// float		fval;
	bool 		first = true;
	while (std::getline(file, line))
	{
		if (first) // skips top line of file
		{
			first = false;
			continue ;
		}
		evaluate(line);
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
		// throws exception if year is less than 1900 (not really neccessary but fine in this case)
		if (year < 1900)
		{
			throw std::invalid_argument("");
		}
		// if no exception, remove year from string
		date.erase(0, date.find('-') + 1);
	}
	catch (...)
	{
		std::cout << "Error: Invalid Year Format => " << saveDate << std::endl;
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
		std::cout << "Error: Invalid Month Format => " << saveDate << std::endl;
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
		std::cout << "Error: Invalid Day Format => " << saveDate << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::validate_input( std::string value ) {
	float 	val;
	bool	decimal = false;
	bool	success = true;

	for (size_t i = 0; i < value.length(); i++)
	{
		if ((value[i] == '-' && i != 0) || (value[i] == '.' && decimal))
		{
			success = false;
			break ;
		}
		if (!isdigit(value[i]) && value[i] != '-' && value[i] != '.')
		{
			success = false;
			break ;
		}
		if ( value[i] == '.')
		{
			decimal = true;
		}
	}
	if (!success)
	{
		std::cout << "Error: not a number => " << value << std::endl;
		return (false);
	}
	std::stringstream ss(value);
	ss >> val;
	if (val < 0.0)
	{
		std::cout << "Error: not a positive number => " << value << std::endl;
		return (false);
	}
	if (val > 999.9)
	{
		std::cout << "Error: too large a number => " << value << std::endl;
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
		// if (compare >= current && compare < next)
		if (current <= compare && next > compare)
		{
			// std::cout << "compare: " << compare << ", current: " << current << std::endl;
			it--;
			return (it->second);
		}
		current = next;
	}
	return (csv.end()->second);
}
