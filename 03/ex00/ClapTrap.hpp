/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 16:40:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	
	private:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:

		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap &copy );
		~ClapTrap( void );

		ClapTrap	&operator=( const ClapTrap &copy );

		std::string	getName( void ) const ;
		int			getHitPoints( void ) const ;
		int			getEnergyPoints( void ) const ;
		int			getAttackDamage( void ) const ;

		void		setName( std::string name );
		void		setHitPoints( int hit_points );
		void		setEnergyPoints( int energy_points );

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

};

void	energyRemaining( ClapTrap &current );

#endif