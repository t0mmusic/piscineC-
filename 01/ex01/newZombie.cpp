/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:39 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 14:53:02 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Creates a new zombie and returns it.	*/

Zombie* newZombie( std::string name )
{
	Zombie	*new_zom = new Zombie;

	new_zom->set_name(name);
	return (new_zom);
}
