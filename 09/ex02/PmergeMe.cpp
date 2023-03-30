#include "PMergeMe.hpp"

PmergeMe::PmergeMe() {
	std::srand(unsigned(std::time(NULL)));
	for (size_t i = 0; i < 3000; i++)
	{
		int	c = std::rand() % 10000;
		v.push_back(c);
		d.push_back(c);
	}
	printBeforeAfter();
	gettimeofday(&start, NULL);
	mergeInsert(v);
	printTime(v.size(), "std::vector");
	gettimeofday(&start, NULL);
	mergeInsert(d);
	printTime(d.size(), "std::deque ");
}

PmergeMe::PmergeMe( int ac, char **av ) {
	int	err = importArray(ac, av);
	if (err == 1)
	{
		return ;
	}
	printBeforeAfter();
	gettimeofday(&start, NULL);
	if (!err)
	{
		mergeInsert(v);
	}
	printTime(v.size(), "std::vector");
	gettimeofday(&start, NULL);
	if (!err)
	{
		mergeInsert(d);
	}
	printTime(d.size(), "std::deque ");
}

PmergeMe::~PmergeMe() {
	if (v != vTest || d != dTest)
	{
		std::cout << "Sorting Failed!" << std::endl;
	}
}

int	PmergeMe::importArray( int ac, char **av ) {
	int	i;
	for (i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (!isdigit(av[i][j]))
			{
				std::cout << "Error: Invalid Char => " << av[i][j] << std::endl;
				return (1);
			}
			v.push_back(atoi(av[i]));
			d.push_back(atoi(av[i]));
		}
	}
	if (i == 2)
	{
		return (2);
	}
	return (0);
}

void	PmergeMe::printBeforeAfter( ) {
	vTest = v;
	dTest = d;
	std::cout << "Before : ";
	printVector(vTest);
	std::sort(vTest.begin(), vTest.end());
	std::sort(dTest.begin(), dTest.end());
	std::cout << "After  : ";
	printVector(vTest);
}

void	PmergeMe::setStart() {
	gettimeofday(&start, NULL);
}

void	PmergeMe::printTime( size_t size, std::string type ) {
	std::cout << "Time to process a range of " << size
	<< " elements with " << type << ": ";
	gettimeofday(&end, NULL);
	long secs_used = (end.tv_sec - start.tv_sec);
	std::cout << ((secs_used * 1000000) + end.tv_usec) - (start.tv_usec) << " us" << std::endl;
}

/* --------------------------------------------------------------------------- */

// methods for merge-insert sorting a vector

// insertion sort: checks each value to determine whether it is smaller than the previous
// if it is, swaps it until all are in the right order
void	PmergeMe::insert( std::vector<int> &ins ) {

	std::vector<int>::iterator backwards;

	for(std::vector<int>::iterator forwards = ins.begin(); forwards != ins.end(); forwards++)
	{
		backwards = forwards;
		while (backwards != ins.begin() && *backwards < *(backwards - 1))
		{
			std::swap(*backwards, *(backwards - 1));
			backwards--;
		}
	}
}

// vector merge sort
std::vector<int>	PmergeMe::merge( std::vector<int> &src, std::vector<int> &dst ) {

	std::vector<int>::iterator s = src.begin();
	size_t	i = 0; // using size_t as iterator for dest as std::iterator won't work on changing vector

	while (dst.begin() + i != dst.end())
	{
		if (*s < *(dst.begin() + i)) // if value in source is smaller than value in destination
		{
			dst.insert(dst.begin() + i, *s); // insert source value into that position in destination
			s++; // move to next value in source
		}
		if (s == src.end()) // if everything from src is merged, no need to continue
		{
			break ;
		}
		i++; // move to next position in vector
	}
	while (s != src.end()) // put any remaing values from source in destination
	{
		dst.insert(dst.begin() + i, *s);
		s++;
		i++;
	}
	return (dst);
}

void	PmergeMe::mergeInsert( std::vector<int> &curr ) {
	size_t	middle = curr.size() / 2;

	// left and right vectors each containing half of the values
	std::vector<int>	left(curr.begin(), curr.begin() + middle);
	std::vector<int>	right(curr.begin() + (middle), curr.end());

	if (middle > MERGE)
	{
		mergeInsert(left);
		mergeInsert(right);
	}
	else
	{
		insert(left);
		insert(right);
	}

	curr = merge(left, right);
}

void	PmergeMe::printVector( std::vector<int> vec )
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

/* --------------------------------------------------------------------------- */

// same methods implemented for std::deque

void	PmergeMe::insert( std::deque<int> &ins ) {

	std::deque<int>::iterator backwards;

	for(std::deque<int>::iterator forwards = ins.begin(); forwards != ins.end(); forwards++)
	{
		backwards = forwards;
		while (backwards != ins.begin() && *backwards < *(backwards - 1))
		{
			std::swap(*backwards, *(backwards - 1));
			backwards--;
		}
	}
}

std::deque<int>	PmergeMe::merge( std::deque<int> &src, std::deque<int> &dst ) {

	std::deque<int>::iterator s = src.begin();
	size_t	i = 0;

	while (dst.begin() + i != dst.end())
	{
		if (*s < *(dst.begin() + i))
		{
			dst.insert(dst.begin() + i, *s);
			s++;
		}
		if (s == src.end())
		{
			break ;
		}
		i++;
	}
	while (s != src.end())
	{
		dst.insert(dst.begin() + i, *s);
		s++;
		i++;
	}
	return (dst);
}

void	PmergeMe::mergeInsert( std::deque<int> &curr ) {
	size_t	middle = curr.size() / 2;

	std::deque<int>	left(curr.begin(), curr.begin() + middle);
	std::deque<int>	right(curr.begin() + (middle), curr.end());

	if (middle > MERGE)
	{
		mergeInsert(left);
		mergeInsert(right);
	}
	else
	{
		insert(left);
		insert(right);
	}

	curr = merge(left, right);
}

void	PmergeMe::printDeque( std::deque<int> deq )
{
	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
