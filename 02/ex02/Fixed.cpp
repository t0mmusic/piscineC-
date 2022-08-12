/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 14:46:57 by jbrown           ###   ########.fr       */
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
	this->number = copy.getRawBits();
	return ;
}

Fixed::Fixed( const int i ){
	std::cout << "Int constructor called." << std::endl;
	this->number = i << Fixed::bits;
	return ;
}

Fixed::Fixed( const float f ){
	std::cout << "Float constructor called." << std::endl;
	this->number = roundf(f * (1 << Fixed::bits));
	return ;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called." << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {
	return (this->number);
}

void	Fixed::setRawBits( int const raw ){
	this->number = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->number / (1 << Fixed::bits));
}

int		Fixed::toInt( void ) const{
	return (this->number >> Fixed::bits);
}

Fixed &Fixed::operator = ( const Fixed &copy ){
	std::cout << "Copy assignment operator called." << std::endl;
	this->number = copy.getRawBits();
	return (*this);
}

float Fixed::operator + ( const Fixed &obj ){
	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator - ( const Fixed &obj ){
	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator / ( const Fixed &obj ){
	return (this->toFloat() / obj.toFloat());
}

float	Fixed::operator * ( const Fixed &obj ){
	return (this->toFloat() * obj.toFloat());
}

bool Fixed::operator > ( Fixed &obj ){
		return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator < ( Fixed &obj ){
		return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator >= ( Fixed &obj ){
		return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator <= ( Fixed &obj ){
		return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator == ( Fixed &obj ){
		return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator != ( Fixed &obj ){
		return (this->getRawBits() != obj.getRawBits());
}

float	Fixed::operator ++ ( void ){
	this->number++;
	return (this->toFloat());
}

float	Fixed::operator -- ( void ){
	this->number--;
	return (this->toFloat());
}

int	Fixed::operator ++ ( int ){
	int	untouched = this->number;
	this->number++;
	return (untouched);
}

int	Fixed::operator -- ( int ){
	int	untouched = this->number;
	this->number--;
	return (untouched);
}

Fixed	&Fixed::min( Fixed &obj1, Fixed &obj2 ){
	if ( obj1 < obj2 )
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::min( const Fixed &obj1, const Fixed &obj2 ){
	if ( obj1.getRawBits() < obj2.getRawBits() )
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max( Fixed &obj1, Fixed &obj2 ){
	if ( obj1 > obj2 )
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::max( const Fixed &obj1, const Fixed &obj2 ){
	if ( obj1.getRawBits() > obj2.getRawBits() )
		return (obj1);
	return (obj2);
}

std::ostream &operator << (std::ostream &os, const Fixed &obj ){
	os << obj.toFloat();
	return (os);
}