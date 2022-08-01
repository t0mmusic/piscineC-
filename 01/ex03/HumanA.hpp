/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:54:55 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 12:59:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:

	HumanA(std::string str, Weapon &weap);
	~HumanA(void);

	void	attack();

	void	setWeapon(Weapon &weap);

	private:

	std::string	name;
	Weapon		*tool;
};

#endif