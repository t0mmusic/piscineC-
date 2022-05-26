/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:36:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/26 17:28:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
using namespace std;

class	Contact
{
	public:
	string	first_name;
	string	last_name;
	string	nick_name;
	string	phone_number;
	string	darkest_secret;
};

class	PhoneBook
{
	public:
	Contact	phone_book[8];
	int		num;
};

void	fifo(PhoneBook phone)
{
	for (int i = 0; i < 7 ; i++)
	{
		phone.phone_book[i] = phone.phone_book[i + 1];
	}
}

void	add_contact(PhoneBook *phone)
{
	Contact	book;

		std::cout << "Enter first name: " << std::endl;
		std::cin >> book.first_name;
		std::cout << "Enter last name: " << std::endl;
		std::cin >> book.last_name;
		std::cout << "Enter nick name: " << std::endl;
		std::cin >> book.nick_name;
		std::cout << "Enter phone number: " << std::endl;
		std::cin >> book.phone_number;
		std::cout << "Enter darkest secret: " << std::endl;
		std::cin >> book.darkest_secret;
	if (phone->num == 7)
	{
		fifo(*phone);
		phone->phone_book[7] = book;
	}
	else
	{
		phone->phone_book[phone->num] = book;
		phone->num++;
	}
}

void	string_limiter(string str)
{
	if (str.length() > 10)
	{
		printf("%9s", str.c_str());
		printf(".");
	}
	else
	{
		printf("%10s", str.c_str());
	}
}

void	print_contact(Contact contact, int index)
{
	printf("%10i", index);
//	std::cout << index;
	std::cout << " | ";
	string_limiter(contact.first_name);
//	std::cout << contact.first_name;
	std::cout << " | ";
	string_limiter(contact.last_name);
//	std::cout << contact.last_name;
	std::cout << " | ";
	string_limiter(contact.nick_name);
//	std::cout << contact.nick_name << std::endl;
	printf("\n");
}

void	find_contact(PhoneBook *book)
{
	int		i = 0;
	string	str;

	while (++i < 9)
		print_contact(book->phone_book[i - 1], i);
	std::cout << "Enter the index of the contact you are searching for: " << std::endl;
	std::cin >> str;
	i = atoi(str.c_str());
	if (i < 1 || i > 8)
		std::cout << "Invalid Index!" << std::endl;
	else
		print_contact(book->phone_book[i - 1], i);
}

int	main(void)
{
	string		input;
	PhoneBook	book;

	book.num = 0;
	while (1)
	{
		std::cout << "Pick an option: " << std::endl;
		std::cout << "ADD to add new contact." << std::endl;
		std::cout << "SEARCH to find a contact." << std::endl;
		std::cout << "EXIT to exit." << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			add_contact(&book);
			print_contact(book.phone_book[0], 1);
			input = "";
		}
		else if (input == "SEARCH")
		{
			find_contact(&book);
		}
		else if (input == "EXIT")
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