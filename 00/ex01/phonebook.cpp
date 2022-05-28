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

/*	I think printf is forbidden? Maybe?	 Also namespaces??? */

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

int	check_empty(string str)
{
	if (str == "")
	{
		std::cout << "Please enter something." << std::endl;
		return (1);
	}
	return (0);
}

string	check_spaces(void)
{
	string	line;
	int		i;

	std::getline(std::cin, line);
	while (check_empty(line))
		std::getline(std::cin, line);
	i = 0;
	while (line[i])
	{
		if (isspace(line[i]))
		{
			std::cout << "Only one word, please." << std::endl;
			std::getline(std::cin, line);
			i = -1;
		}
		i++;
	}
	return (line);
}

string	check_phone(void)
{
	string	line;
	int		i;

	std::getline(std::cin, line);
	while (check_empty(line))
		std::getline(std::cin, line);
	i = 0;
	while (line[i])
	{
		if (isalpha(line[i]))
		{
			std::cout << "Phone number must not contain alphabetical characters." << std::endl;
			std::getline(std::cin, line);
			i = -1;
		}
		i++;
	}
	return (line);
}

void	add_contact(PhoneBook *phone)
{
	Contact	book;

	std::cout << "Enter first name: " << std::endl;
	book.first_name = check_spaces();
	std::cout << "Enter last name: " << std::endl;
	book.last_name = check_spaces();
	std::cout << "Enter nick name: " << std::endl;
	std::getline(std::cin, book.nick_name);
	while (check_empty(book.nick_name))
		std::getline(std::cin, book.nick_name);
	std::cout << "Enter phone number: " << std::endl;
	book.phone_number = check_phone();
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, book.darkest_secret);
	while (check_empty(book.darkest_secret))
		std::getline(std::cin, book.darkest_secret);
	if (phone->num == 8)
	{
		fifo(phone);
		phone->phone_book[7] = book;
	}
	else
	{
		phone->phone_book[phone->num] = book;
		phone->num++;
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
	if (contact.first_name == "")
	{
		std::cout << "Contact is empty." << std::endl;
		return ;
	}
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
	std::cout << "Enter the index of the contact you are searching for (0 to cancel): " << std::endl;
	std::getline(std::cin, str);
	i = atoi(str.c_str());
	if (str == "0")
	{
		system("clear");
		return ;
	}
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
		std::cout << "1. ADD to add new contact." << std::endl;
		std::cout << "2. SEARCH to find a contact." << std::endl;
		std::cout << "3. EXIT to exit." << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "1")
		{
			system("clear");
			add_contact(&book);
		}
		else if (input == "SEARCH" || input == "2")
		{
			system("clear");
			find_contact(&book);
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
