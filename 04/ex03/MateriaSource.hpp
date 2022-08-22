/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:31:52 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:51:24 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Materia.hpp"

class IMateriaSource {
	private:

	public:
		virtual ~IMateriaSource( void ) {}
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*_learned[4];
		MateriaSource( const MateriaSource &copy );
		MateriaSource	&operator=( const MateriaSource &copy );
	public:
		MateriaSource( void );
		virtual ~MateriaSource( void );
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif