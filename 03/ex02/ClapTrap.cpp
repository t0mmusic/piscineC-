/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/04 17:34:55 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ){
	std::cout << "Default ClapTrap Constructor!" << std::endl;
	this->_name = "Default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap( std::string name ){
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been summoned into existence!" << std::endl;
	std::cout << "Hit points : " << this->_hit_points << std::endl;
	std::cout << "Energy points : " << this->_energy_points << std::endl;
	std::cout << "Attack points : " << this->_attack_damage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "*************************************************" << std::endl;
	std::cout << this->_name << " has been ceased to be!" << std::endl;
	std::cout << "*************************************************" << std::endl;
	return ;
}

std::string	ClapTrap::getName( void ){
	return (this->_name);
}

int	ClapTrap::getHitPoints( void ){
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints( void ){
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage( void ){
	return (this->_attack_damage);
}

void	ClapTrap::setName( std::string name ){
	this->_name = name;
}

void	ClapTrap::setHitPoints( int hit_points ){
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints( int energy_points ){
	this->_energy_points = energy_points;
}

void	energyRemaining( ClapTrap &current ){
	std::cout << "ClapTrap " << current.getName() << " has used energy! " <<
	current.getEnergyPoints() << " energy points remaining!" <<
	std::endl;
}

bool	death_check( ClapTrap &current ){
	if (current.getHitPoints() < 1)
	{
		std::cout << current.getName() << " is already dead!" <<
		std::endl;
		return (false);
	}
	return (true);
}

bool	energy_check( ClapTrap &current ){
	if (current.getEnergyPoints() < 1)
	{
		std::cout << current.getName() << " has no energy left!" <<
		std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::attack(const std::string& target){
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

void	ClapTrap::takeDamage(unsigned int amount){
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

void	ClapTrap::beRepaired(unsigned int amount){
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