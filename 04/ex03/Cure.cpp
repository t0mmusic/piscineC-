/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:35:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:07:51 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Cure::Cure( void ) {
	this->type = "cure";
}

Cure::~Cure(void) {
	std::cout << "Cure Materia Dissolved." << std::endl;
}

std::string const & Cure::getType( void ) const {
	return (this->type);
}

AMateria* Cure::clone( void ) const {
	AMateria *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}