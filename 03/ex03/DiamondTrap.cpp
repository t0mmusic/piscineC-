/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:18:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 09:51:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	ClapTrap::_name = "Default Diamond_clap_name";
	this->_name = "Default Diamond";
	this->_hit_points = FragTrap::_hit_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_energy_points = ScavTrap::_energy_points;
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been upgraded to DiamondTrap Class!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) {
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_energy_points = ScavTrap::_energy_points;
	std::cout << "Frag hitpoints: " << ScavTrap::_hit_points << std::endl;
	std::cout << "Frag attack: " << FragTrap::_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	std::cout << name << " has been upgraded to DiamondTrap Class!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "DiamondTrap Copy Created!" << std::endl;
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

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has shattered into oblivion!" << std::endl;
	std::cout << "*************************************************" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &copy ) {	
	
	std::cout << "*************************************************" << std::endl;
	std::cout << "DiamondTrap Copy Created!" << std::endl;
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

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}