/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:08:34 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:20:38 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 15:19:32 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
/*	Creates an array of Zombie objects, allocated in heap memory. This array
	is returned to the function that called the function.	*/

=======
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
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