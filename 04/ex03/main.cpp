/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:39:50 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 16:44:50 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->unequip(5);
	me->unequip(3);
	me->unequip(-10);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(new Ice());
	me->equip(new Ice());
	Ice	*reject = new Ice();
	me->equip(reject);
	delete reject;
	delete bob;
	delete me;
	delete src;
	return (0);
}