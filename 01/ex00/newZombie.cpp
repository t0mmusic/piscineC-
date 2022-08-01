/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:39 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 09:13:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Allocates a Zombie object in the heap and returns it to the function
	that called it.	*/

Zombie* newZombie( std::string name )
{
	Zombie	*new_zom = new Zombie;

	new_zom->set_name(name);
	return (new_zom);
}
