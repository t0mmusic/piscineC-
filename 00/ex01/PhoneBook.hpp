/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/29 14:14:09 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:

	/*	Public class members	*/

	Contact	phone_book[8];

	/*	Constructor/Desctructor	*/

	PhoneBook(void);
	~PhoneBook(void);

	/*	Getters/Setters	*/

	int		get_num(void);
	void	set_num(int nbr);

	/*	Functions of this class	*/

	void	fifo(PhoneBook *phone);
	void	add_contact(PhoneBook *phone);
	void	string_limiter(std::string str);
	void	print_contact(Contact contact, int index);
	void	print_detailed(Contact contact);
	void	find_contact(PhoneBook *book);

	private:

	/*	Private class members.	*/

	int		num;
};

#endif
