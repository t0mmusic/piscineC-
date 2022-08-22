/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:57:24 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:40:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"

Character::Character( void ) {
	this->_name = "Cloud Strife";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "\e[0;32m" << _name << " has entered the fray!" << "\e[0m" << std::endl;
}

Character::Character( std::string name ) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "\e[0;32m" << _name << " has entered the fray!" << "\e[0m" << std::endl;
}

Character::~Character( void ) {
	std::cout << "\e[0;35m" << _name << " is ready to exit!" << "\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete (_inventory[i]);
	}
	std::cout << "\e[0;35m" << _name << " has retired from the arena!" << "\e[0m" << std::endl;
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		//checks that the same pointer is not placed in the
		//array twice
		if (_inventory[i] && _inventory[i] == m)
		{
			std::cout << _name << " Already Has This Materia in Inventory!" 
			<< std::endl;
			break ;
		}
		else if (!_inventory[i])
		{
			std::cout << _name << " Has Added " << m->getType() 
			<< " To Inventory!" << std::endl;
			_inventory[i] = m;
			break ;
		}
		else if (i == 3)
		{
			std::cout << _name << " Has No Inventory Slots Remaining!" << std::endl;
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
	else if (idx < 4 && idx >= 0)
	{
		std::cout << "Inventory Slot Already Empty!" << std::endl;
	}
	else
	{
		std::cout << "Invalid Inventory Slot!" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Unusable Inventory Slot!" << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}