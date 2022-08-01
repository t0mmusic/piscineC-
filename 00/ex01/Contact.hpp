/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:13:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/29 14:13:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class	Contact
{
	public:

	/*	Constructor/Destructor	*/

	Contact(void);
	~Contact(void);

	/*	Getters	*/

	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);

	/*	Setters	*/

	bool	set_first_name(std::string str);
	bool	set_last_name(std::string str);
	bool	set_nick_name(std::string str);
	bool	set_phone_number(std::string str);
	bool	set_darkest_secret(std::string str);

	/*	Functions of this class	*/

	std::string	check_phone(void);
	std::string	check_spaces(void);
	int			check_empty(std::string str);

	private:

	/*	Class members	*/

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
