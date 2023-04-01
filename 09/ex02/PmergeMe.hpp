#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <sys/time.h>
#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

#define MERGE 50

class PmergeMe {
	private:
		std::vector<int>	vTest;
		std::deque<int>		dTest;
		std::vector<int>	v;
		std::deque<int>		d;
		struct timeval		start;
		struct timeval		end;
	protected:
	public:
		PmergeMe();
		PmergeMe( const PmergeMe &cpy );
		PmergeMe( int ac, char **av );
		~PmergeMe();

		PmergeMe &operator=( const PmergeMe &cpy );

		int		importArray( int ac, char **av );
		void	printBeforeAfter( );
		void	setStart();
		void	printTime( size_t size, std::string type );

		// std::vector methods
		void				mergeInsert( std::vector<int> &curr );
		void				insert( std::vector<int> &ins );
		std::vector<int>	merge( std::vector<int> &src, std::vector<int> &dst );
		void				printVector( std::vector<int> vec );

		// std::deque methods
		void				mergeInsert( std::deque<int> &curr );
		void				insert( std::deque<int> &ins );
		std::deque<int>		merge( std::deque<int> &src, std::deque<int> &dst );
		void				printDeque( std::deque<int> deq );
};

#endif
