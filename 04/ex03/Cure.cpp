/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:35:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:40:14 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	this->type = "cure";
	std::cout << "\e[0;36m" << "Cure." << "\e[0m" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "\e[0;31m" << "Cure Materia Dissolved." << "\e[0m" << std::endl;
}

std::string const & Cure::getType( void ) const {
	return (this->type);
}

AMateria* Cure::clone( void ) const {
	AMateria *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target) {
	std::cout << "\e[0;36m" << "* heals " << target.getName() << "'s wounds *"
	<< "\e[0m" << std::endl;
}