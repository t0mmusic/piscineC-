/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:03:16 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 21:50:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate( void ) {
	srand(time(0));
	int	random = rand() % 3;

	std::cout << random << std::endl;
	switch (random)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	default:
		return (new C());
	}
}

void	identify( Base* p ) {
	//Trying to dynamically cast to the wrong type will return NULL
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "No Valid Type Found!" << std::endl;

}

void	identify( Base& p ) {
	//Because aliases(&) cannot be NULL, we must use try/catch instead
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	std::cout << "No Valid Type Found!" << std::endl;
}
