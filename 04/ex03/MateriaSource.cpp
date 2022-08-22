/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:44:35 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:40:22 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
	std::cout << "\e[0;32m" << "Materia Source Forged." << "\e[0m" << std::endl;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "\e[0;33m" << "Materia Source Is Nearing its End!" << "\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i])
			delete (_learned[i]);
	}
	std::cout << "\e[0;33m" << "Materia Source Purged." << "\e[0m" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (!_learned[i])
		{
			_learned[i] = m;
			return ;
		}
	}
	std::cout << "No Available Inventory for new Materia!" << std::endl;
}

/*	I think this is supposed to create a new materia only if it exists
	in the learned list. Then once it has been passed to the character,
	it should be removed from the list.	*/

// AMateria* MateriaSource::createMateria(std::string const & type) {
// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (_learned[i] && !_learned[i]->getType().compare(type))
// 		{
//			std::cout << "Materia Source Generated new "
//			<< type << "!" << std::endl;
// 			AMateria *tmp = _learned[i];
// 			_learned[i] = NULL;
// 			return (tmp);
// 		}
// 	}
//	std::cout << "Unknown Materia Type!" << std::endl;
// 	return (NULL);
// }

/*	This version more closely reflects what is asked for in the subject.	*/

AMateria* MateriaSource::createMateria(std::string const & type) {
	int	j = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!_learned[i])
		{
			break ;
		}
		if (_learned[i] && !_learned[i]->getType().compare(type))
		{
			std::cout << "Materia Source Generated new "
			<< type << "!" << std::endl;
			return (_learned[i]->clone());
		}
		j++;
	}
	std::cout << "Materia Type Not Recognised By Source!" << std::endl;
	return (NULL);
}