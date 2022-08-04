/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:59:30 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 09:06:54 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ){
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap " << this->_name << " has been summoned into existence"
	<< " against its will!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack points : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap " << this->_name << " go bye-bye!" << std::endl;
	std::cout << "*************************************************" << std::endl;
}

void	FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << this->_name << " needs a high-five!" << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "FragTrap " << this->_name << " has been left hanging!" << std::endl;
}