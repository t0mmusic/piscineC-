/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:09:05 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:35:55 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "*************************************" << std::endl;
	std::cout << "Oh, it's a " << this->type << "!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " went wherever cats go!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat::Cat( const Cat &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat &Cat::operator=( const Cat &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}

void		Cat::makeSound( void ) const{
	std::cout << this->type << " goes MeEeOoW!" << std::endl;
}