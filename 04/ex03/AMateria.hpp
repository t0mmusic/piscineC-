/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:31:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:02:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AMateria;

class	ICharacter {

	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*_learned[4];
	public:
		MateriaSource( void );
		~MateriaSource( void );
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

class	AMateria {

	private:
		
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

class	Character: public ICharacter {
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character( void );
		Character( std::string name );
		virtual ~Character( void );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

class	Ice: public AMateria {

	private:
		
	public:
		Ice( void );
		virtual ~Ice( void );

		virtual AMateria* clone() const;
		virtual std::string const & getType() const;
		void use(ICharacter& target);
};

class	Cure: public AMateria {

	private:
		
	public:
		Cure( void );
		virtual ~Cure( void );

		AMateria* clone() const;
		std::string const & getType() const;
		void use(ICharacter& target);
};