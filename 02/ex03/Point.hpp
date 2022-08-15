/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:04:01 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 09:05:16 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{

	private:

		const Fixed	_x;
		const Fixed	_y;

	public:

		Point( void );
		Point( float x, float y );
		Point( const Point &copy );
		~Point( void );

		Point &operator=( const Point &copy );

		const Fixed	&GetX( void ) const ;
		const Fixed	&GetY( void ) const ;

};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point );

#endif