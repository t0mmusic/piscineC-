/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:15 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 11:23:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

protected:
	int	_energy_points;
public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &copy );
	~ScavTrap( void );

	ScavTrap	&operator=( const ScavTrap &copy );

	void	guardGate( void );

};

#endif