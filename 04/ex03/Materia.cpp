/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:59:56 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 11:08:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria( void ) {
	std::cout << "\e[0;32m" << "Materia created, type: " << "\e[0m";
}

AMateria::~AMateria( void ) {
	std::cout << "\e[0;31m" << "Materia Demateria-ised." << "\e[0m" << std::endl;
}

std::string const & AMateria::getType() const {
	return (type);
}

/*	Virtual base class functions, unused in abstract class.	*/

AMateria* AMateria::clone() const {
	return (NULL);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}