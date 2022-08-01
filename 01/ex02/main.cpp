/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:31:37 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 09:27:46 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of pointer: " << stringPTR << std::endl;
	std::cout << "Address of reference: " << &stringREF << std::endl;
	std::cout << "-----------------------------------"  << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of pointer: " << *stringPTR << std::endl;
	std::cout << "Value of reference: " << stringREF << std::endl;
	return (0);
}