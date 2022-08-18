/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 09:01:50 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "Default ClapTrap Constructor!" << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been summoned into existence!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack damage : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "Claptrap Copy Created!" << std::endl;
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

ClapTrap::~ClapTrap( void ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been ceased to be!" << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &copy ) {
	std::cout << "*************************************************" << std::endl;
	std::cout << "Claptrap Copy Created!" << std::endl;
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

std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints( void ) const {
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints( void ) const {
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage( void ) const {
	return (this->_attack_damage);
}

void	ClapTrap::setName( std::string name ) {
	std::cout << this->_name << " is now known as" << name << "!" << std::endl; 
	this->_name = name;
}

void	ClapTrap::setHitPoints( int hit_points ) {
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints( int energy_points ) {
	this->_energy_points = energy_points;
}

void	energyRemaining( ClapTrap &current ) {
	std::cout << "ClapTrap " << current.getName() << " has used energy! " <<
	current.getEnergyPoints() << " energy points remaining!" <<
	std::endl;
}

bool	death_check( ClapTrap &current ) {
	if (current.getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << current.getName() << " is already dead!" <<
		std::endl;
		return (false);
	}
	return (true);
}

bool	energy_check( ClapTrap &current ) {
	if (current.getEnergyPoints() < 1)
	{
		std::cout << "ClapTrap " << current.getName() << " has no energy left!" <<
		std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::attack(const std::string& target) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " <<
	target << ", causing " << this->_attack_damage << " points of damage!" <<
	std::endl; 
	this->_energy_points--;
	energyRemaining(*this);
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken " << amount <<
	" damage and has ";
	if (this->_hit_points > 0)
	{
		std::cout << this->_hit_points << " hit points remaining!" <<
		std::endl;
	}
	else
	{
		std::cout << "died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	this->_energy_points --;
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " has repaired! " <<
	this->_hit_points << " hit points remaining!" <<
	std::endl;
	energyRemaining(*this);
}