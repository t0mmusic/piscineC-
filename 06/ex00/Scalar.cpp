/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:19:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 21:56:47 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() {

}

Scalar::Scalar(const Scalar &copy) {
	_input = copy._input;
}

Scalar::~Scalar() {

}

Scalar	&Scalar::operator=(const Scalar &assign) {
	_input = assign._input;
	return (*this);
}

Scalar::Scalar( std::string arg ) {
	_input = arg;
}

char const *Scalar::Unconvertable::what(void) const throw() {
	return ("Non displayable");
}

char const *Scalar::Unprintable::what(void) const throw() {
	return ("impossible");
}

char	Scalar::charConvert( void ) {
	float	f = doubleConvert();
	if (isnan(f) || isinf(f) || isinff(f))
		throw Unprintable();
	if (f < 33 || f > 126)
		throw Unconvertable();
	return ((char)f);
}

int	Scalar::intConvert( void ) {
	float f = doubleConvert();
	if (isnan(f) || isinf(f) || isinff(f))
		throw Unprintable();
	if (f < -2147483648 || f > 2147483647)
		throw Unconvertable();
	return ((int)f);
}

float	Scalar::floatConvert( void ) {
	return ((float)doubleConvert());
}

double	Scalar::doubleConvert( void ) {
	double	d = atof(_input.c_str());
	return (d);
}

std::string	checkChar(char *arg) {
	if (arg[0] && !arg[1])
	{
		if (isprint(arg[0]) && !isdigit(arg[0]))
		{
			std::stringstream tmp;
			tmp << (int)arg[0];
			std::string ret = tmp.str();
			return (ret);
		}
	}
	return (arg);
}

bool		Scalar::validCheck( void ) {
	if (!_input[1])
		return (true);
	if (this->doubleConvert())
		return (true);
	for (int i = 0; _input[i]; i++)
	{
		if (!isdigit(_input[i]) && _input[i] != '-' && _input[i] != '.')
			return (false);
	}
	return (true);
}