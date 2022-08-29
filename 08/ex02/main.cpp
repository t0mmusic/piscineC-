/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:06:52 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 15:14:53 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "\e[1;94m" << "******INITIALISING MUTANT STACK TYPE INT******" << "\e[0m" << std::endl;
	std::cout << "\e[1;94m" << "******GREEN IS MUTANT STACK, RED IS LIST MIMICING SAME FUNCTIONS******" << "\e[0m" << std::endl;
	MutantStack<int>	mstack;
	std::list<int>		reglist;

	std::cout << "\e[1;94m" << "******ADDING '5' TO STACK******" << "\e[0m" << std::endl;
	mstack.push(5);
	reglist.push_front(5);
	std::cout << "\e[1;94m" << "******ADDING '17' TO STACK******" << "\e[0m" << std::endl;
	mstack.push(17);
	reglist.push_front(17);

	std::cout << "\e[1;94m" << "******RETRIEVING VALUE AT TOP OF STACK******" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.top() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.front() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "******REMOVING VALUE FROM STACK******" << "\e[0m" << std::endl;
	mstack.pop();
	reglist.pop_front();

	std::cout << "\e[1;94m" << "******RETRIEVING VALUE AT TOP OF STACK******" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.top() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.front() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "******GETTING SIZE OF STACK******" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.size() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.size() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "******ADDING MORE VALUES TO STACK******" << "\e[0m" << std::endl;
	mstack.push(3);
	reglist.push_back(3);
	mstack.push(5);
	reglist.push_back(5);
	mstack.push(737);
	reglist.push_back(737);
	mstack.push(0);
	reglist.push_back(0);

	std::cout << "\e[1;94m" << "******CREATING ITERATORS FOR STACK******" << "\e[0m" << std::endl;
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	std::list<int>::iterator	itl = reglist.begin();
	std::list<int>::iterator	itle = reglist.end();

	std::cout << "\e[1;94m" << "******TESTING INCREMENT/DECREMENT******" << "\e[0m" << std::endl;
	++it;
	--it;
	std::cout << "\e[1;94m" << "******READING TOP VALUE AND INCREMENTING WITHOUT POP()******" << "\e[0m" << std::endl;
	while (it != ite)
	{
		std::cout << "\e[0;32m" << *it << "\e[0m" << std::endl;
		++it;
	}
	while (itl != itle)
	{
		std::cout << "\e[0;31m" << *itl << "\e[0m" << std::endl;
		++itl;
	}
	std::cout << "\e[1;94m" << "******CREATING REGULAR STACK USING COPY CONSTRUCTOR WITH MUTANT STACK******" << "\e[0m" << std::endl;
	std::stack<int> s(mstack);
	return (0);
}