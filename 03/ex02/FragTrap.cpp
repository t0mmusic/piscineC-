/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:59:30 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/30 14:33:11 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "Default FragTrap Constructor!" << std::endl;
	this->_name = "Default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {
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

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap(copy._name) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap Copy Created!" << std::endl;
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

FragTrap::~FragTrap( void ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap " << this->_name << " go bye-bye!" << std::endl;
	std::cout << "*************************************************" << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &copy ) {	
	
	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap Copy Created!" << std::endl;
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

void	FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << this->_name << " needs a high-five!" << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "FragTrap " << this->_name << " has been left hanging!" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	std::cout << _name << " has fragged " <<
	target << ", causing " << this->_attack_damage << " points of damage!" <<
	std::endl; 
}