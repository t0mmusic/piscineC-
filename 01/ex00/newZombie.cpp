/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:39 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:13:19 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 14:53:02 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
/*	Allocates a Zombie object in the heap and returns it to the function
	that called it.	*/
=======
/*	Creates a new zombie and returns it.	*/
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5

Zombie* newZombie( std::string name )
{
	Zombie	*new_zom = new Zombie;

	new_zom->set_name(name);
	return (new_zom);
}
