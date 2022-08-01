/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:31:37 by jbrown            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 09:27:46 by jbrown           ###   ########.fr       */
=======
/*   Updated: 2022/05/30 15:41:42 by jbrown           ###   ########.fr       */
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
<<<<<<< HEAD
	std::string	&stringREF = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of pointer: " << stringPTR << std::endl;
	std::cout << "Address of reference: " << &stringREF << std::endl;
	std::cout << "-----------------------------------"  << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of pointer: " << *stringPTR << std::endl;
=======
	std::string	**stringREF = &stringPTR;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of pointer: " << &stringPTR << std::endl;
	std::cout << "Address of reference: " << &stringREF << std::endl;
	std::cout << "-----------------------------------"  << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of pointer: " << stringPTR << std::endl;
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5
	std::cout << "Value of reference: " << stringREF << std::endl;
	return (0);
}