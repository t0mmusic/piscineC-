#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		BitcoinExchange	test;
		return (0);
	}
	BitcoinExchange	bit(av[1]);

	return (0);
}
