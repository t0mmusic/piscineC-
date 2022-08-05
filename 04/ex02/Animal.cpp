/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:33:26 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 11:18:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
	this->type = "Jackalope or Something";
	std::cout << "A " << this->type << " has been born!" << std::endl;
	this->setSound("GARBLE GARBLE GARBLE!");
}

Animal::~Animal( void ){
	std::cout << "A " << this->type << " left this cruel world!" << std::endl;
}

void		Animal::makeSound( void ) const{
	std::cout << this->type << " goes " << this->getSound() << std::endl;
}

void		Animal::setSound( std::string sound ){
	this->sound = sound;
}

std::string	Animal::getSound( void ) const{
	return (this->sound);
}

std::string	Animal::getType( void ) const{
	return (this->type);
}

Dog::Dog( void ){
	this->type = "Dog";
	this->_doggy_brain = new Brain();
	std::cout << "A " << this->type << " has emerged!" << std::endl;
	this->setSound("WOOF!");
}

Dog::~Dog( void ){
	delete this->_doggy_brain;
	std::cout << "A " << this->type << " has wondered away!" << std::endl;
}

Cat::Cat( void ){
	this->type = "Cat";
	this->_kitty_brain = new Brain();
	std::cout << "A " << this->type << " appeared!" << std::endl;
	this->setSound("MEOW!");
}

Cat::~Cat( void ){
	delete this->_kitty_brain;
	std::cout << "A " << this->type << " went wherever cats go!" << std::endl;
}
