/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 14:19:56 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called." << std::endl;
	this->number = 0;
	return ;
}

Fixed::Fixed( const Fixed &copy ){
	std::cout << "Copy constructor called." << std::endl;
	this->setRawBits(copy.getRawBits());
	return ;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called." << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->number);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called." << std::endl;
	this->number = raw;
}