/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 13:04:06 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	A new zombie is created, and it announces itself. This Zombie is allocated
	in the stack.	*/

void 	randomChump( std::string name )
{
	Zombie	new_zom;

	new_zom.set_name(name);
	new_zom.announce();
}
