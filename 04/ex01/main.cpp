/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:45:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 09:56:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	
	Animal	*menagerie[10];

	std::cout << "\033[36m" << "Instantiating array of animals, half cats, half dogs." << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			menagerie[i] = new Dog();
		else
			menagerie[i] = new Cat();
	}
	std::cout << "\033[36m" << "Each animal makes a sound." << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		menagerie[i]->makeSound();
	}
	std::cout << "\033[36m" << "Each element of the array is deleted." << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete menagerie[i];
	}

	std::cout << "\033[36m" << "Testing deep copy." << "\033[0m" << std::endl;
	Cat	*cat_one = new Cat();
	Cat	cat_two(*cat_one);
	Cat	cat_three;
	cat_three = *cat_one;

	cat_one->printThought();
	delete cat_one;
	std::cout << "\033[36m" << "Copy Cats can still think once orignal is deleted." << "\033[0m" << std::endl;
	cat_two.printThought();
	cat_three.printThought();

	return 0;

}