#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <sys/time.h>
#include <iostream>
#include <vector>

#define MERGE 50

class PmergeMe {
	private:
		struct timeval	start;
		struct timeval	end;
	protected:
	public:
		PmergeMe();
		PmergeMe( std::vector<int> vec );
		~PmergeMe();

		void				mergeInsert( std::vector<int> &curr );
		void				insert( std::vector<int> &ins );
		std::vector<int>	merge( std::vector<int> &first, std::vector<int> &second );
		void				printVector( std::vector<int> vec );
		void				pushVector( std::vector<int> &src, std::vector<int> &dst );
};

#endif