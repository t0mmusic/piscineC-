/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:25:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:13:10 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Ice::Ice( void ) {
	this->type = "ice";
}

Ice::~Ice( void ) {
	std::cout << "Ice Materia Disintegrated." << std::endl;
}

std::string const & Ice::getType( void ) const {
	return (this->type);
}

AMateria* Ice::clone( void ) const {
	AMateria *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}