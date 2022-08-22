/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:31:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:47:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>

// definition added to prevent circular inclusion
class	ICharacter;

/*	Interface Classes. Do not have associated cpp files because default
	constructor is defined in class declaration.	*/

class	AMateria {

	private:
		AMateria( const AMateria &copy );
		AMateria	&operator=( const AMateria &copy );
	protected:
		std::string	type;
	public:
		AMateria(std::string const & type);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria( void );
		virtual ~AMateria( void );
};

#endif