/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:40:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 17:36:13 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point	find(5, 5);
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);

	if (bsp(a, b, c, find))
	{
		std::cout << "Success!" << std::endl;
	}
	else
	{
		std::cout << "Failure!" << std::endl;
	}
	
	return 0;
}