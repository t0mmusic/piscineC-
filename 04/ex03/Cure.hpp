/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:34:07 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:47:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Materia.hpp"
#include "Character.hpp"

class	Cure: public AMateria {

	private:
		Cure( const Cure &copy );
		Cure	&operator=( const Cure &copy );
	public:
		Cure( void );
		virtual ~Cure( void );

		AMateria* clone() const;
		std::string const & getType() const;
		void use(ICharacter& target);
};

#endif