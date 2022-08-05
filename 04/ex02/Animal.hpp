/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:17:53 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 11:18:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal{

private:

	std::string	sound;

protected:

	std::string	type;

public:

	Animal( void );
	virtual ~Animal( void );
	void		makeSound( void ) const;
	void		setSound( std::string sound );
	std::string	getSound( void ) const;
	std::string	getType( void ) const;
};

class Dog: public Animal{

private:

	Brain	*_doggy_brain;

public:

	Dog( void );
	virtual ~Dog( void );

};

class Cat: public Animal{

private:

	Brain	*_kitty_brain;

public:

	Cat( void );
	virtual ~Cat( void );
	
};

#endif