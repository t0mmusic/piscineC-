/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:08:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 10:53:25 by jbrown           ###   ########.fr       */
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
		hoard[i].set_name(name);
		i++;
	}
	return (hoard);
}