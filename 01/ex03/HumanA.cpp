/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:02:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 15:15:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weap): name(str), tool(&weap) {
	std::cout << this->name << " has been created weilding a " << tool->getType() << std::endl;
	return ;
}

HumanA::~HumanA(void) {
	std::cout << this->name << " is no longer with us :(" << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &weap) {
	this->tool = &weap;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << tool->getType() << std::endl;
}