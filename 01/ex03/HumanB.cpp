/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:18:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/03 16:21:44 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	name = str;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weap)
{
	this->tool = weap;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->tool.getType() << std::endl;
}