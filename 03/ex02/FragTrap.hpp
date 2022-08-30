/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:57:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/30 14:32:13 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

private:

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &copy );
	~FragTrap( void );

	FragTrap	&operator=( const FragTrap &copy );

	void	attack(const std::string& target);
	void	highFivesGuys( void );

};

#endif