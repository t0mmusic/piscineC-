/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:25:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:40:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	this->type = "ice";
	std::cout << "\e[0;34m" << "Ice." << "\e[0m" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "\e[0;31m" << "Ice Materia Disintegrated." << "\e[0m" << std::endl;
}

std::string const & Ice::getType( void ) const {
	return (this->type);
}

AMateria* Ice::clone( void ) const {
	AMateria *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target) {
	std::cout << "\e[0;34m" << "* shoots an ice bolt at " << target.getName()
	<< " *" << "\e[0m" << std::endl;
}