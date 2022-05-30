/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 15:04:47 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	A new zombie is created, and it announces itself.	*/

void 	randomChump( std::string name )
{
	Zombie	*new_zom = newZombie(name);

	new_zom->set_name(name);
	new_zom->announce();
}
