/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:02:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/03 16:25:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon weap)
{
	name = str;
	tool = weap;
	return ;
}

void	HumanA::setWeapon(Weapon weap)
{
	tool = weap;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << tool.getType() << std::endl;
}