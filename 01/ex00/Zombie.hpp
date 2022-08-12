/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:10:05 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 08:56:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{

	public:

		/*	Constructor/Desctroctor	*/

		Zombie(void);
		~Zombie(void);

		/*	Setters	*/

		void	set_name(std::string str);

		/*	Getters	*/

		std::string	get_name(void);

		/*	Class functions	*/

		void	announce(void);

	private:

		/*	Private class members	*/

		std::string	name;

};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );