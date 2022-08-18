/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:17:53 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:25:26 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:

	std::string	type;

public:

	Animal( void );
	Animal( const Animal &copy );
	Animal( std::string &type );
	virtual ~Animal( void );

	Animal &operator=( const Animal &copy );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;

};

#endif