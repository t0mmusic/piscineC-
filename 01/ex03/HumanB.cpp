/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:18:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 10:10:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	std::cout << this->name << " has been created." << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " is no longer with us :(" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weap)
{
		this->tool = &weap;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->tool->getType() << std::endl;
}