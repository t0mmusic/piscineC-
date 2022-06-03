/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:51:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/03 16:21:10 by jbrown           ###   ########.fr       */
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

std::string	*Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	type = &str;
}