#include "PMergeMe.hpp"

PmergeMe::PmergeMe() {
	gettimeofday(&start, NULL);
}

PmergeMe::PmergeMe( std::vector<int> vec ) {
	gettimeofday(&start, NULL);
	std::cout << "Before : ";
	printVector(vec);
	mergeInsert(vec);
	std::cout << "After : ";
	printVector(vec);
	std::cout << "Time to process a range of " << vec.size()
	<< " elements with std::vector: ";
}

PmergeMe::~PmergeMe() {
	gettimeofday(&end, NULL);
	long secs_used = (end.tv_sec - start.tv_sec);
	std::cout << ((secs_used * 1000000) + end.tv_usec) - (start.tv_usec) << " us" << std::endl;
}

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

// pushes one vector onto another
void	PmergeMe::pushVector( std::vector<int> &src, std::vector<int> &dst ) {
	for (std::vector<int>::iterator it = src.begin(); it != src.end(); it++)
	{
		dst.push_back(*it);
	}
}

// Re-evaluate merge sort
std::vector<int>	PmergeMe::merge( std::vector<int> &first, std::vector<int> &second ) {
	if (*first.begin() < *second.begin())
	{
		pushVector(second, first);
		return (first);
	}
	pushVector(first, second);
	return (second);
}

void	PmergeMe::mergeInsert( std::vector<int> &curr ) {
	size_t	middle = curr.size() / 2;

	// creates a smaller vector with the first half of the values
	std::vector<int>	left(curr.begin(), curr.begin() + middle);
	// creates a smaller vector with the second half of the values
	std::vector<int>	right(curr.begin() + (middle), curr.end());

	if (left.size() > MERGE)
	{
		mergeInsert(left);
	}
	else
	{
		insert(left);
	}
	if (right.size() > MERGE)
	{

		mergeInsert(right);
	}
	else
	{
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