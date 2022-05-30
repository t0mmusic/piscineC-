/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:18:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 16:59:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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