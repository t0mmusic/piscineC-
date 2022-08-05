/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:33:26 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 10:20:15 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
	this->type = "Jackalope or Something";
	std::cout << "A " << this->type << " has been born!" << std::endl;
	this->setSound("GARBLE GARBLE GARBLE!");
}

Animal::Animal ( std::string type ){
	this->type = type;
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
	std::cout << "A " << this->type << " has emerged!" << std::endl;
	this->setSound("WOOF!");
}

Dog::~Dog( void ){
	std::cout << "A " << this->type << " has wondered away!" << std::endl;
}

Cat::Cat( void ){
	this->type = "Cat";
	std::cout << "A " << this->type << " appeared!" << std::endl;
	this->setSound("MEOW!");
}

Cat::~Cat( void ){
	std::cout << "A " << this->type << " went wherever cats go!" << std::endl;
}

WrongAnimal::WrongAnimal( void ){
	this->type = "Whatever this thing is";
	std::cout << "A " << this->type << " has been born!" << std::endl;
	this->setSound("hi!");
}

WrongAnimal::WrongAnimal ( std::string type ){
	this->type = type;
	std::cout << "A " << this->type << " has been born!" << std::endl;
	this->setSound("GARBLE GARBLE GARBLE!");
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "A " << this->type << " mercifully retreated!" << std::endl;
}

void		WrongAnimal::makeSound( void ) const{
	std::cout << this->type << " goes " << this->getSound() << std::endl;
}

void		WrongAnimal::setSound( std::string sound ){
	this->sound = sound;
}

std::string	WrongAnimal::getSound( void ) const{
	return (this->sound);
}

std::string	WrongAnimal::getType( void ) const{
	return (this->type);
}

WrongCat::WrongCat( void ){
	this->type = "Wrong Cat";
	std::cout << "A " << this->type << " appeared!" << std::endl;
	this->setSound("WJKNJKWFB!");
}

WrongCat::~WrongCat( void ){
	std::cout << "A " << this->type << " ain't no more!" << std::endl;
}