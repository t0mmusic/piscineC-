/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:19:11 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 21:55:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <sstream>

class Scalar {
	public:
		Scalar( void );
		Scalar( std::string arg );
		Scalar( const Scalar &copy );
		~Scalar( void );

		Scalar	&operator=( const Scalar &assign );

		class Unconvertable: public std::exception {
			char const *what(void) const throw();
		};

		class Unprintable: public std::exception {
			char const *what(void) const throw();
		};

		char	charConvert( void );
		int		intConvert( void );
		float	floatConvert( void );
		double	doubleConvert( void );

		bool	validCheck( void );


	private:
		std::string	_input;
};

std::string	checkChar(char *arg);

#endif
