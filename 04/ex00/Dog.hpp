/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:00:31 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:33:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{

public:

	Dog( void );
	virtual ~Dog( void );

	Dog( const Dog &copy );
	Dog &operator=( const Dog &copy );

	void		makeSound( void ) const;

};

#endif