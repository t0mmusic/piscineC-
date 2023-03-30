#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::vector<int>	v;
	std::deque<int>		d;

	if (ac == 1)
	{
		PmergeMe	noArgs;
	}
	else
	{
		PmergeMe	args(ac, av);
	}

	return (0);
}
