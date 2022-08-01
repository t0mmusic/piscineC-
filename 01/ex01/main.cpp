/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:44:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 09:21:51 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Creates a hoard of 10 zombies, all named Gerald. Once all have announced
	themselves, they are deconstructed.	*/

int	main(void)
{
	Zombie	*hoard;
	int		count = 10;

	hoard = zombieHorde(10, "Gerald");
	while (count)
	{
		hoard[count - 1].announce();
		count--;
	}
	delete[] hoard;
	return (0);
}