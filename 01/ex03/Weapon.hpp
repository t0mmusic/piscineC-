/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:47:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/03 16:20:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:

	Weapon(std::string name);
	Weapon(void);
	~Weapon(void);

	std::string	*getType(void);
	void		setType(std::string str);

	private:

	std::string	*type;
};

#endif