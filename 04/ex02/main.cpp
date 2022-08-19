/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:45:08 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 10:04:14 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	
	// Animal	broke;
	Animal	*not_broke;
	not_broke = new Cat();
	Animal	*also_not_broke = new Dog();

	Cat	still_works;
	Dog	also_still_works;

	delete not_broke;
	delete also_not_broke;

	return 0;

}