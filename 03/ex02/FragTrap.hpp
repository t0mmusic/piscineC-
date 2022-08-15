/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:57:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 16:58:49 by jbrown           ###   ########.fr       */
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

	void	highFivesGuys( void );

};

#endif