#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please input a file!" << std::endl;
	}
	BitcoinExchange	ex(av[1]);

	// ex.importCsv();
	// ex.importCompare(av[1]);
	// ex.validate_date("2020-05-05");
	// ex.validate_date("dhfb");
	// ex.validate_date("1900-10101");
	// ex.validate_date("1900-01-190990");
	// ex.validate_date("1900-01-31");
	// ex.validate_date("1900-01-32");
	// ex.validate_date("1900-02-30");
	// ex.findClosestDate("2022-03-30");
	return (0);
}