/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:10:56 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 09:45:46 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign( const Point &p1, const Point &p2, const Point &p3 ) {

	return ((p1.GetX() - p3.GetX()) * (p2.GetY() - p3.GetY())
		- ((p2.GetX()) - p3.GetX()) * (p1.GetY() - p3.GetY()));

}

/*	Binary space partitioning subdivides a space (in this case, a triangle)
	into 2 sets. This is used to determine if a point exists on one side
	of a line or the other. This function calculates the position of the
	input Point relative to each side of the triangle to see if it is inside
	or outside of the triangle.	*/

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point ) {

	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	// determines if any of the values returned were positive or negative
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	// if both pos and neg are true, the point lies outside of the triangle
	return !(has_neg && has_pos);

}