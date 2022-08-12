/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:11:37 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 17:03:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0) {
	std::cout << "*************************************" << std::endl;
	std::cout << "Default constructor for Point called." << std::endl <<
	"x: " << this->_x << std::endl <<
	"y: " << this->_y << std::endl;
	std::cout << "*************************************" << std::endl;
}

Point::Point( float x, float y ): _x(x), _y(y) {
	std::cout << "*************************************" << std::endl;
	std::cout << "Assignment constructor for Point called." << std::endl <<
	"x: " << this->_x << std::endl <<
	"y: " << this->_y << std::endl;
	std::cout << "*************************************" << std::endl;
}

Point::Point( const Point &copy ): _x(copy._x), _y(copy._y) {
	std::cout << "*************************************" << std::endl;
	std::cout << "Point copy constructor called." << std::endl;
	std::cout << "*************************************" << std::endl;
}

Point::~Point( void ) {
	std::cout << "*************************************" << std::endl;
	std::cout << "Point destructor called." << std::endl;
	std::cout << "*************************************" << std::endl;
}

Point &Point::operator=( const Point &copy ) {
	if (this->_x.getRawBits() != copy._x.getRawBits())
		*this = copy;
	return (*this);
}

const Fixed	&Point::GetX( void ) const {
	return (this->_x);
}

const Fixed	&Point::GetY( void ) const {
	return (this->_y);
}