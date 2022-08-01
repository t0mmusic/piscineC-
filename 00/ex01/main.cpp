/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:33:35 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 11:54:18 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*	Sets a loop for the user to input commands. They have the choice to add a
	new contact, search existing contacts, or exit the program.	*/

int	main(void)
{
	std::string	input;
	PhoneBook	book;

	system("clear");
	while (1)
	{
		std::cout << "Pick an option: " << std::endl;
		std::cout << "1. ADD to add new contact." << std::endl;
		std::cout << "2. SEARCH to find a contact." << std::endl;
		std::cout << "3. EXIT to exit." << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "1")
		{
			system("clear");
			book.add_contact(&book);
		}
		else if (input == "SEARCH" || input == "2")
		{
			system("clear");
			book.find_contact(&book);
		}
		else if (input == "EXIT" || input == "3")
		{
			exit (0);
		}
		else
		{
			system("clear");
			std::cout << "Please choose a valid option." << std::endl;
		}
	}
	return (0);
}
