/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:14:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/29 14:14:18 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*	Constructor for the Contact class.	*/

Contact::Contact(void)
{
	return;
}

/*	Destructor for the Contact class.	*/

Contact::~Contact(void)
{
	return;
}

/*	Getters	*/

std::string	Contact::get_first_name(void)
{
		return (Contact::first_name);
}

std::string	Contact::get_last_name(void)
{
	return (Contact::last_name);
}

std::string	Contact::get_nick_name(void)
{
	return (Contact::nick_name);
}

std::string	Contact::get_phone_number(void)
{
	return (Contact::phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (Contact::darkest_secret);
}

/*	Setters	*/

bool	Contact::set_first_name(std::string str)
{
	if (!str.empty())
	{
		first_name = str;
		return (true);
	}
	else
	{
		return (false);
	}
}

bool	Contact::set_last_name(std::string str)
{
	if (!str.empty())
	{
		last_name = str;
		return (true);
	}
	else
	{
		return (false);
	}
}

bool	Contact::set_nick_name(std::string str)
{
	if (!str.empty())
	{
		nick_name = str;
		return (true);
	}
	else
	{
		return (false);
	}
}

bool	Contact::set_phone_number(std::string str)
{
	if (!str.empty())
	{
		phone_number = str;
		return (true);
	}
	else
	{
		return (false);
	}
}

bool	Contact::set_darkest_secret(std::string str)
{
	if (!str.empty())
	{
		darkest_secret = str;
		return (true);
	}
	else
	{
		return (false);
	}
}

/*	Checks if a string is empty.	*/

int	Contact::check_empty(std::string str)
{
	if (str == "" || str[0] == ' ')
	{
		std::cout << "Entry can not be left blank." << std::endl;
		return (1);
	}
	return (0);
}

/*	Checks if a string has spaces in it.	*/

std::string	Contact::check_spaces(void)
{
	std::string	line;
	int		i;

	std::getline(std::cin, line);
	while (check_empty(line))
		std::getline(std::cin, line);
	i = 1;
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

/*	Checks that a phone number does not contain alphabetical characters.	*/

std::string	Contact::check_phone(void)
{
	std::string	line;
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
