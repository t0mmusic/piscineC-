/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:47:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 16:22:57 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Weapon
{
	public:

	Weapon(std::string name);
	~Weapon(void);

	std::string	getType(void);
	void		setType(std::string str);

	private:

	std::string	type;
};