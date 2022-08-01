/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:47:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 13:00:07 by jbrown           ###   ########.fr       */
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

	std::string const	&getType(void);
	void				setType(std::string str);

	private:

	std::string	type;
};

#endif