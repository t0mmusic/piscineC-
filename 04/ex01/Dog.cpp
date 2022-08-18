/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:07:19 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 15:38:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	this->doggyBrain = new Brain;
	std::cout << "*************************************" << std::endl;
	std::cout << "No wait, it's a " << this->type << "!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Dog::~Dog( void ) {
	delete this->doggyBrain;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has wondered away!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Dog::Dog( const Dog &copy ) {
	this->type = copy.type;
	this->doggyBrain = new Brain;
	this->doggyBrain = copy.doggyBrain;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Dog &Dog::operator=( const Dog &copy ) {
	this->type = copy.type;
	this->doggyBrain = new Brain;
	this->doggyBrain = copy.doggyBrain;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}

void		Dog::makeSound( void ) const{
	std::cout << this->type << " goes WOOF!" << std::endl;
}