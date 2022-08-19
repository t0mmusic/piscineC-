/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:44:35 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:34:11 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i])
			delete (_learned[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (!_learned[i])
		{
			_learned[i] = m;
			break ;
		}
	}
}

/*	I think this is supposed to create a new materia only if it exists
	in the learned list. Then once it has been passed to the character,
	it should be removed from the list.	*/

// AMateria* MateriaSource::createMateria(std::string const & type) {
// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (_learned[i] && !_learned[i]->getType().compare(type))
// 		{
// 			AMateria *tmp = _learned[i];
// 			_learned[i] = NULL;
// 			return (tmp);
// 		}
// 	}
// 	return (NULL);
// }

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (!type.compare("ice"))
	{
		return (new Ice());
	}
	else if (!type.compare("cure"))
	{
		return (new Cure());
	}
	return (NULL);
}