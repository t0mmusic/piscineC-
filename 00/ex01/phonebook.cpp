/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:36:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/26 17:28:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

#include "PhoneBook.hpp"

/*	Constructor for PhoneBook class.	*/

PhoneBook::PhoneBook(void)
{
	this->num = 0;
	return;
}

/*	Destructor for PhoneBook class.	*/

PhoneBook::~PhoneBook(void)
{
	return;
}

/*	Getters.	*/

int		PhoneBook::get_num(void)
{
	return (num);
}

/*	Setters.	*/

void	PhoneBook::set_num(int nbr)
{
	num = nbr;
}

/*	Removes the first contact in the directory and moves all of the other
	contacts up one position.	*/

void	PhoneBook::fifo(PhoneBook *phone)
{
	for (int i = 0; i < 7 ; i++)
	{
		phone->phone_book[i] = phone->phone_book[i + 1];
	}
}

/*	Creates a new contact with the input values for first name, last name,
	nick name, phone number and darkest secret. It then adds this new
	contact to the end of the phonebook. If the phonebook is full, it moves
	all of the contacts up one position, deleting the first.	*/

void	PhoneBook::add_contact(PhoneBook *phone)
{
	Contact		book;
	std::string	str;

	str = "";
	std::cout << "Enter first name: " << std::endl;
	book.set_first_name(book.check_spaces());
	std::cout << "Enter last name: " << std::endl;
	book.set_last_name(book.check_spaces());
	std::cout << "Enter nick name: " << std::endl;
	std::getline(std::cin, str);
	while (book.check_empty(str))
		std::getline(std::cin, str);
	book.set_nick_name(str);
	str = "";
	std::cout << "Enter phone number: " << std::endl;
	book.set_phone_number(book.check_phone());
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, str);
	while (book.check_empty(str))
		std::getline(std::cin, str);
	book.set_darkest_secret(str);
	str = "";
	if (phone->get_num() == 8)
	{
		fifo(phone);
		phone->phone_book[7] = book;
	}
	else
	{
		phone->phone_book[phone->get_num()] = book;
		phone->set_num(phone->get_num() + 1);
	}
	system("clear");
}

/*	Limits strings to 10 characters when printing in the search menu.
	If the entry has more than 10 characters, it will only print the
	first 9 followed by a '.' to indicate this is not the whole string.
	If it has less than 10 characters, it will print spaces before the
	entry to make the total string 10 characters long.	*/

void	PhoneBook::string_limiter(std::string str)
{
	int	rem;

	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9) << ".";
	}
	else
	{
		rem = 10 - str.length();
		while (rem)
		{
			std::cout << ' ';
			rem--;
		}
		std::cout << str;
	}
}

/*	Prints the contact details for the search menu, with each entry
	separated by a '|'.	*/

void	PhoneBook::print_contact(Contact contact, int index)
{
	std::cout << "         " << index << "|";
	string_limiter(contact.get_first_name());
	std::cout << "|";
	string_limiter(contact.get_last_name());
	std::cout << "|";
	string_limiter(contact.get_nick_name());
	std::cout << std::endl;
}

/*	Prints all of the details of a single contact, with a newline between
	each entry.	If the entry does not contain any info, it will print a
	message explaining that instead.	*/

void	PhoneBook::print_detailed(Contact contact)
{
	if (contact.get_first_name().empty())
	{
		std::cout << "Contact is empty." << std::endl;
		std::cout << "-----------------------" << std::endl;
		return ;
	}
	std::cout << "First Name: ";
	std::cout << contact.get_first_name() << std::endl;
	std::cout << "Last Name: ";
	std::cout << contact.get_last_name() << std::endl;
	std::cout << "Nick Name: ";
	std::cout << contact.get_nick_name() << std::endl;
	std::cout << "Phone Number: ";
	std::cout << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << contact.get_darkest_secret() << std::endl;
	std::cout << "-----------------------" << std::endl;
}

/*	Prints basic details of all contacts, then allows the user to see a more
	detailed version of a particular entry. If anything other than a correct
	index (or '0' for exit) is entered, it will prompt the user to try again.	*/

void	PhoneBook::find_contact(PhoneBook *book)
{
	int			i = 0;
	std::string	str;

	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	while (++i < 9)
		print_contact(book->phone_book[i - 1], i);
	std::cout << "-------------------------------------------" << std::endl;
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
