/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:18:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/02 16:08:50 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:

	HumanB(std::string str);
	~HumanB(void);

	void	setWeapon(Weapon &weap);

	void	attack();

	std::string	name;
	Weapon		tool;
};

#endif