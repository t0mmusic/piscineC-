/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:57:24 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:43:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Character::Character( void ) {
	this->_name = "Cloud Strife";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character( std::string name ) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete (_inventory[i]);
	}
}

std::string const & Character::getName() const {
	return (this->_name);
}

/*	Might have to check if pointers are the same to prevent
	double deletion	*/

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		//checks that the same pointer is not placed in the
		//array twice
		if (_inventory[i] && _inventory[i] == m)
		{
			std::cout << "REJECTED" << std::endl;
			break ;
		}
		else if (!_inventory[i])
		{
			_inventory[i] = m;
			break ;
		}
		else if (i == 3)
		{
			std::cout << "REJECTED" << std::endl;
		}
	}
}

/*	Pointer to Materia unequipped must be saved in main	*/

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0 && _inventory[idx])
	{
		std::cout << _inventory[idx]->getType()
		<< " discarded (but not deleted)" << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}