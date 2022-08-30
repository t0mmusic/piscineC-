/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/30 14:46:39 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->_name = "Default Scav";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been upgraded to ScavTrap Class!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "*************************************************" << std::endl;
	std::cout << name << " has been upgraded to ScavTrap Class!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &copy ): ClapTrap(copy._name) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "ScavTrap Copy Created!" << std::endl;
	this->_name = copy.getName();
	this->_hit_points = copy.getHitPoints();
	this->_energy_points = copy.getEnergyPoints();
	this->_attack_damage = copy.getAttackDamage();
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has destructed!" << std::endl;
	std::cout << "*************************************************" << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &copy ) {	
	
	std::cout << "*************************************************" << std::endl;
	std::cout << "ScavTrap Copy Created!" << std::endl;
	this->_name = copy.getName();
	this->_hit_points = copy.getHitPoints();
	this->_energy_points = copy.getEnergyPoints();
	this->_attack_damage = copy.getAttackDamage();
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return (*this);
}

void ScavTrap::guardGate( void ) {
	std::cout << "It's Gate Guardin' time for " << this->_name << "!" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << _name << " has launched an offensive on " <<
	target << ", causing " << this->_attack_damage << " points of damage!" <<
	std::endl; 
}