#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		std::cout << "Error: Expected input as string of values and operators." << std::endl;
		return (1);
	}
	if (ac == 1)
	{
		RPN	test;
		return (0);
	}

	RPN	maths(av[1]);

	return (0);
}
