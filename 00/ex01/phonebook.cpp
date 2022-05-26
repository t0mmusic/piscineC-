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
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
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

void	fifo(PhoneBook *phone)
{
	for (int i = 0; i < 7 ; i++)
	{
		phone->phone_book[i] = phone->phone_book[i + 1];
	}
}

//Need a check to ensure that only one string is input.
//Maybe also make sure phone number is numberic?

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
	if (phone->num == 8)
	{
		fifo(phone);
		phone->phone_book[7] = book;
	}
	else
	{
		phone->phone_book[phone->num] = book;	phone->num++;
	}
	system("clear");
}

void	string_limiter(string str)
{
	if (str.length() > 10)
	{
		printf("%.9s", str.c_str());
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
	std::cout << "|";
	string_limiter(contact.first_name);
	std::cout << "|";
	string_limiter(contact.last_name);
	std::cout << "|";
	string_limiter(contact.nick_name);
	printf("\n");
}

void	print_detailed(Contact contact)
{
	std::cout << "First Name: ";
	std::cout << contact.first_name << std::endl;
	std::cout << "Last Name: ";
	std::cout << contact.last_name << std::endl;
	std::cout << "Nick Name: ";
	std::cout << contact.nick_name << std::endl;
	std::cout << "Phone Number: ";
	std::cout << contact.phone_number << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << contact.darkest_secret << std::endl;
	printf("-----------------------\n");
}

void	find_contact(PhoneBook *book)
{
	int		i = 0;
	string	str;

	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	while (++i < 9)
		print_contact(book->phone_book[i - 1], i);
	printf("-----------------------\n");
	std::cout << "Enter the index of the contact you are searching for: " << std::endl;
	std::cin >> str;
	i = atoi(str.c_str());
	if (i < 1 || i > 8)
	{
		system("clear");
		std::cout << "Invalid Index!" << std::endl;
		find_contact(book);
	}
	else
	{
		system("clear");
		print_detailed(book->phone_book[i - 1]);
	}
}

int	main(void)
{
	string		input;
	PhoneBook	book;

	book.num = 0;
	system("clear");
	while (1)
	{
		input = "";
		std::cout << "Pick an option: " << std::endl;
		std::cout << "ADD to add new contact." << std::endl;
		std::cout << "SEARCH to find a contact." << std::endl;
		std::cout << "EXIT to exit." << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			system("clear");
			add_contact(&book);
		}
		else if (input == "SEARCH")
		{
			system("clear");
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
