/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:54 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:18:23 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 15:04:47 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
/*	A new zombie is created, and it announces itself. This Zombie is allocated
	in the stack.	*/

void 	randomChump( std::string name )
{
	Zombie	new_zom;

	new_zom.set_name(name);
	new_zom.announce();
=======
/*	A new zombie is created, and it announces itself.	*/

void 	randomChump( std::string name )
{
	Zombie	*new_zom = newZombie(name);

	new_zom->set_name(name);
	new_zom->announce();
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
}
