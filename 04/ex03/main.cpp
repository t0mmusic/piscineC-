/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:39:50 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 10:43:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "\e[1;94m" << "******BASIC FUNCTIONALITY TESTS******" << "\e[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character();
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp); //keep track of pointer!
	ICharacter* bob = new Character("bob");
	std::cout << "\e[1;94m" << "******EXPECTED OUTPUT TESTS******" << "\e[0m" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "\e[1;94m" << "******INDEX TESTS******" << "\e[0m" << std::endl;
	me->use(2, *bob);
	me->use(-1, *bob);
	me->use(4, *bob);
	me->unequip(1); //pointer unassigned
	me->unequip(5);
	me->unequip(3);
	me->unequip(1);
	me->unequip(-10);
	std::cout << "\e[1;94m" << "******CHARACTER EQUIP TESTS******" << "\e[0m" << std::endl;
	me->equip(tmp); //pointer reassigned
	me->equip(tmp);
	me->equip(new Ice());
	me->equip(new Cure());
	Ice	*reject = new Ice();
	me->equip(reject);
	std::cout << "\e[1;94m" << "******MATERIA SOURCE TESTS******" << "\e[0m" << std::endl;
	tmp = src->createMateria("NO");
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(reject);
	std::cout << "\e[1;94m" << "******DESTRUCTOR TESTS******" << "\e[0m" << std::endl;
	delete reject;
	delete bob;
	delete me;
	std::cout << "\e[1;94m" << "******DEEP COPY DESTRUCTOR TESTS******" << "\e[0m" << std::endl;
	delete src;
	return (0);
}