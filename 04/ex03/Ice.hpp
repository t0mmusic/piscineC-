/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:33:38 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:47:30 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Materia.hpp"
#include "Character.hpp"

class	Ice: public AMateria {

	private:

		Ice( const Ice &copy );
		Ice	&operator=( const Ice &copy );
		
	public:
		Ice( void );
		virtual ~Ice( void );

		virtual AMateria* clone() const;
		virtual std::string const & getType() const;
		void use(ICharacter& target);
};

#endif