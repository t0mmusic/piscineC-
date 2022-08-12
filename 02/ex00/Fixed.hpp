/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:26:52 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 14:19:16 by jbrown           ###   ########.fr       */
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
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed &operator=( const Fixed &copy );
};

#endif