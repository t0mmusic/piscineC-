/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:45:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 16:51:03 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	
	Animal	*managerie[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			managerie[i] = new Dog();
		else
			managerie[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		managerie[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete managerie[i];
	}
	return 0;

}