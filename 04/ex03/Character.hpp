/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:27:39 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:51:09 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Materia.hpp"

class	ICharacter {
	private:

	public:
		virtual ~ICharacter( void ) {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

class	Character: public ICharacter {
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		Character( const Character &copy );
		Character	&operator=( const Character &copy );
	public:
		Character( void );
		Character( std::string name );
		virtual ~Character( void );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif