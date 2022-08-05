/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:17:53 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 15:14:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

private:

	std::string	sound;

protected:

	std::string	type;

public:

	Animal( void );
	Animal( std::string type );
	virtual ~Animal( void );

	void		makeSound( void ) const;
	void		setSound( std::string sound );
	std::string	getSound( void ) const;
	std::string	getType( void ) const;
};

class Dog: public Animal{

public:

	Dog( void );
	virtual ~Dog( void );

};

class Cat: public Animal{

public:

	Cat( void );
	virtual ~Cat( void );
	
};

class WrongAnimal{

private:

	std::string	sound;

protected:

	std::string	type;

public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	virtual ~WrongAnimal( void );

	void		makeSound( void ) const;
	void		setSound( std::string sound );
	std::string	getSound( void ) const;
	std::string	getType( void ) const;
};

class WrongCat: public WrongAnimal{

public:

	WrongCat( void );
	virtual ~WrongCat( void );
	
};

#endif