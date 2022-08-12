/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:40:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 14:49:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed c( a );
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d(a + b);
	std::cout << d << std::endl;
	std::cout << "Testing Incrementing" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "Testing Decrementing" << std::endl;
	std::cout << b << std::endl;
	std::cout << --c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << "Testing Max" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Testing Min" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "Testing Less Than" << std::endl;
	std::cout << (a < c) << std::endl;
	std::cout << "Testing Less Than or Equal" << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << "Testing Greater Than" << std::endl;
	std::cout << (a > c) << std::endl;
	std::cout << "Testing Greater Than or Equal" << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << "Testing Equal" << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << "Testing Not Eqaul" << std::endl;
	std::cout << (a != c) << std::endl;
	std::cout << "Testing Addition" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << "Testing Subtraction" << std::endl;
	std::cout << a - b << std::endl;
	std::cout << "Testing Multiplication" << std::endl;
	std::cout << a * b << std::endl;
	std::cout << "Testing Division" << std::endl;
	std::cout << a / b << std::endl;
	return 0;
}