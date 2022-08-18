/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:33:26 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:30:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	this->type = "Jackalope or Something";
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been born!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Animal::Animal( const Animal &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Animal::Animal ( std::string &type ) {
	this->type = type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been born!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " left this cruel world!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

void		Animal::makeSound( void ) const {
	std::cout << this->type << " goes GARBLE GARBLE GARBLE!" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

Animal &Animal::operator=( const Animal &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}