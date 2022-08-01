/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:51:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 13:00:00 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string name)
{
	this->setType(name);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	const	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}