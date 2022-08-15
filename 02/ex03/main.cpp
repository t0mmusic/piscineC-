/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:40:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 09:48:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void	bsp_result(bool result)
{
	if (result)
	{
		std::cout << "\e[0;32m" << "Success!" << "\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\e[0;31m" << "Failure!" << "\033[0m" << std::endl;
	}
}

int main( void ) {

	Point	pointOne(0, 0);
	Point	pointTwo(5, 5);
	Point	pointThree(6, 5);
	Point	pointFour(5, 6);
	Point	pointFive(10, 10);
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);

	bsp_result(bsp(a, b, c, pointOne));
	bsp_result(bsp(a, b, c, pointTwo));
	bsp_result(bsp(a, b, c, pointThree));
	bsp_result(bsp(a, b, c, pointFour));
	bsp_result(bsp(a, b, c, pointFive));
	
	return 0;

}