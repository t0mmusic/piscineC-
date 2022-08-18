/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:17:12 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:32:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	this->type = "Whatever this thing is";
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been born!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string type ) {
	this->type = type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been born!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " mercifully retreated!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

void		WrongAnimal::makeSound( void ) const {
	std::cout << this->type << " goes DEFAULT WRONG ANIMAL SOUND" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}