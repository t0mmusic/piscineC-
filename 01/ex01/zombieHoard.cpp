/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:08:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 13:05:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Creates an array of Zombie objects, allocated in heap memory. This array
	is returned to the function that called the function.	*/

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*hoard = new Zombie[N];
	int		i;

	i = 0;
	while (i < N)
	{
		hoard[i] = *newZombie(name);
		i++;
	}
	return (hoard);
}