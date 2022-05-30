/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:08:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 15:19:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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