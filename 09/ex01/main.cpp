#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Expected input as string of values and operators." << std::endl;
		return (1);
	}

	RPN	maths(av[1]);
	// maths.split(av[1]);
	// maths.process();

	return (0);
}