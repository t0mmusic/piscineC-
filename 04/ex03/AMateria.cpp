/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:59:56 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 15:14:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {

}

AMateria::~AMateria( void ) {

}

std::string const & AMateria::getType() const {
	return (type);
}

AMateria* AMateria::clone() const {
	return (NULL);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}