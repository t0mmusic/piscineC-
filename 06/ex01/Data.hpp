/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:19:59 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 15:42:39 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>
#include <stdint.h>

class Data {
	public:
		Data( void );
		Data( const Data &copy );
		~Data( void );

		Data	&operator=( const Data &assign );

		std::string	getMember( void );

	private:
		std::string	_member;

};

uintptr_t	serialize( Data *ptr );
Data		*deserialize( uintptr_t raw );

#endif
