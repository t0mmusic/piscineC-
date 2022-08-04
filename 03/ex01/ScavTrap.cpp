/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/04 17:37:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( std::string name ){
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << name << " has constructed!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ){
	std::cout << this->_name << " has destructed!" << std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "It's Gate Guardin' time for " << this->_name << "!" << std::endl;
}