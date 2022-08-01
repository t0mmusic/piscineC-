/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:44:38 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:21:51 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 15:26:01 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
/*	Creates a hoard of 10 zombies, all named Gerald. Once all have announced
	themselves, they are deconstructed.	*/

=======
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
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
<<<<<<< HEAD
	delete[] hoard;
=======
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
	return (0);
}