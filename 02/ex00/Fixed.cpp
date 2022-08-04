/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/04 13:40:34 by jbrown           ###   ########.fr       */
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

Fixed Fixed::operator = ( const Fixed copy ){
	std::cout << "Copy assignment operator called." << std::endl;
	this->setRawBits(copy.getRawBits());
	return (*this);
}