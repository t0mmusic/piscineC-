/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:54:55 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 16:13:33 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	public:

	HumanA(std::string str, Weapon weap);
	~HumanA(void);

	void	attack();

	std::string	name;
	Weapon		tool;
};