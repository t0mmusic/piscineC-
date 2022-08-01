/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:26:52 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 16:34:44 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					number;
	static const int	bits = 8;

public:

	Fixed( void );
	Fixed( const Fixed &copy );
	Fixed( const int i );
	Fixed( const float f );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed operator = ( const Fixed copy ){
		std::cout << "Copy assignment operator called." << std::endl;
		this->setRawBits(copy.getRawBits());
		return (*this);
	}

	Fixed operator + ( Fixed *obj ){
		return (this->number + obj->number);
	}

	Fixed operator - ( Fixed *obj ){
		return (this->number - obj->number);
	}

	Fixed operator / ( Fixed *obj ){
		return (this->number / obj->number);
	}

	Fixed operator * ( Fixed *obj ){
		return (this->number * obj->number);
	}

	bool operator > ( Fixed *obj ){
			return (this->number > obj->number);
	}

	bool operator < ( Fixed *obj ){
			return (this->number < obj->number);
	}

	bool operator >= ( Fixed *obj ){
			return (this->number >= obj->number);
	}

	bool operator <= ( Fixed *obj ){
			return (this->number <= obj->number);
	}

	bool operator == ( Fixed *obj ){
			return (this->number == obj->number);
	}

	bool operator != ( Fixed *obj ){
			return (this->number != obj->number);
	}

	Fixed	operator ++ ( void ){
		this->number++;
		return (*this);
	}

	Fixed	operator -- ( void ){
		this->number--;
		return (*this);
	}

	Fixed	operator ++ ( int ){
		Fixed	untouched( *this );
		this->number++;
		return (untouched);
	}

	Fixed	operator -- ( int ){
		Fixed	untouched( *this );
		this->number--;
		return (untouched);
	}

	Fixed	&min( Fixed &obj1, Fixed &obj2 ){
		if ( obj1.number < obj2.number)
			return (obj1);
		return (obj2);
	}

	const Fixed	&min( const Fixed &obj1, const Fixed &obj2 ){
		if ( obj1.number < obj2.number)
			return (obj1);
		return (obj2);
	}

	Fixed	&max( Fixed &obj1, Fixed &obj2 ){
		if ( obj1.number > obj2.number)
			return (obj1);
		return (obj2);
	}

	const Fixed	&max( const Fixed &obj1, const Fixed &obj2 ){
		if ( obj1.number > obj2.number)
			return (obj1);
		return (obj2);
	}

	friend std::ostream &operator << (std::ostream &os, const Fixed &obj ){
		os << obj.toFloat();
		return (os);
	}
};

#endif