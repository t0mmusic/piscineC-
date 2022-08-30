/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:15 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/30 14:46:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

private:


public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &copy );
	~ScavTrap( void );

	ScavTrap	&operator=( const ScavTrap &copy );

	void	attack(const std::string& target);
	void	guardGate( void );

};

#endif