/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:44:38 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:15:24 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 15:04:42 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
/*	Creates two Zombie objects; one allocated in heap memory and one in stack
	memory. Both announce themselves and are then deconstructed.	*/

=======
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
int	main(void)
{
	Zombie	*zom1;

	zom1 = newZombie("Reggi");
<<<<<<< HEAD
	zom1->announce();
	randomChump("Steve");
	delete zom1;
=======
	randomChump("Steve");
	zom1->announce();
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
	return (0);
}