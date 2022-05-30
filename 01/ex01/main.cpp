/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:44:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 15:26:01 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	return (0);
}