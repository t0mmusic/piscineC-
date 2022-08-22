/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:15 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 12:46:41 by jbrown           ###   ########.fr       */
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

	ScavTrap	&operator=( const ClapTrap &copy );

	void	attack(const std::string& target);
	void	guardGate( void );

};

#endif