/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:05:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 09:37:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	private:

		std::string	_name;
	
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &copy );
		~DiamondTrap( void );

		DiamondTrap	&operator=( const DiamondTrap &copy );

		void	attack( const std::string &target );
		void	whoAmI( void );

};