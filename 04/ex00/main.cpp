/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:45:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:44:04 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// Animal pointer assigned to Animal in heap
	const Animal* meta = new Animal();
	// Animal pointer assigned to Dog in heap
	const Animal* dog = new Dog();
	// WrongAnimal pointer assigned to WrongCat in heap
	const WrongAnimal* wa = new WrongCat();

	dog->makeSound();
	meta->makeSound();
	wa->makeSound();

	delete meta;
	delete dog;
	delete wa;

	std::cout << "\033[36m" << "*************************************" << "\033[0m" << std::endl;

	// When is a cat a cat?
	Cat 	cat_1 = Cat();
	Animal	cat_2 = Cat();
	cat_1.makeSound();
	cat_2.makeSound();
	return 0;
}