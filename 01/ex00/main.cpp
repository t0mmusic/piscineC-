/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:44:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 09:15:24 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Creates two Zombie objects; one allocated in heap memory and one in stack
	memory. Both announce themselves and are then deconstructed.	*/

int	main(void)
{
	Zombie	*zom1;

	zom1 = newZombie("Reggi");
	zom1->announce();
	randomChump("Steve");
	delete zom1;
	return (0);
}