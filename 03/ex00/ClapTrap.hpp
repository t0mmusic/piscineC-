/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 15:29:41 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:

	std::string			_name;
	int					_hit_points;
	int					_energy_points;
	const static int	_attack_damage = 0;

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	~ClapTrap( void );


	std::string	getName( void );
	int			getHitPoints( void );
	int			getEnergyPoints( void );
	int			getAttackDamage( void );

	void		setName( std::string name );
	void		setHitPoints( int hit_points );
	void		setEnergyPoints( int energy_points );

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};

void	energyRemaining( ClapTrap &current );

#endif