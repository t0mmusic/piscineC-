/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:01:04 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 14:47:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Faceless intern has been hired." << std::endl;
}

Intern::Intern(const Intern &copy) {
	(void)copy;
	std::cout << "Oh, no, not another intern." << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "Faceless intern has been let go." << std::endl;
}

/*	What a fun copy...	*/

Intern	&Intern::operator=(const Intern &assign) {
	(void)assign;
	return (*this);
}

Form	*Intern::makeForm( const std::string &name, const std::string &target ) {
	
	int	idx = 0;
	Form	*returnForm;
	std::string form_types[3] = {"Shrubbery Creation",
								"Robotomy Request", 
								"Presidential Pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(form_types[i]))
			break ;
		idx++;
	}
	switch (idx)
	{
		case 0:
			std::cout << "New " << name << " Form has been created by faceless intern" << std::endl;
			returnForm = new ShrubberyCreationForm(target);
			return (returnForm);
			break;
		case 1:
			std::cout << "New " << name << " Form has been created by faceless intern" << std::endl;
			returnForm = new RobotomyRequestForm(target);
			return (returnForm);
			break;
		case 2:
			std::cout << "New " << name << " Form has been created by faceless intern" << std::endl;
			returnForm = new PresidentialPardonForm(target);
			return (returnForm);
			break;
		default:
			std::cout << "No " << name << " Form Exists!" << std::endl;
			return (NULL);
			break;
	}
}