/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:48:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 16:22:07 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clapmeister General");
	ScavTrap	clappers("Clap-boi");

	clappy.attack(clappers.getName());
	clappers.takeDamage(clappy.getAttackDamage());
	clappers.attack(clappy.getName());
	clappy.takeDamage(clappers.getAttackDamage());

	clappers.guardGate();

	return (0);
}