/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/04 16:06:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clapmeister General");
	ClapTrap	clappers("Clap-boi");

	clappy.attack(clappers.getName());
	clappers.takeDamage(clappy.getAttackDamage());
	clappers.attack(clappy.getName());
	clappy.takeDamage(clappers.getAttackDamage());

	clappy.beRepaired(10);
	clappers.beRepaired(5);

	clappy.takeDamage(6);
	clappers.takeDamage(100);

	clappers.attack(clappy.getName());

	for (int repair = 1; repair < 10; repair++)
	{
		clappy.beRepaired(repair);
	}
	
	clappy.attack("Steve");

	return (0);
}