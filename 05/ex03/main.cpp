/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:10:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 15:19:05 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	greg;
	Form	*allForms[3];
	Bureaucrat	steve("Steve", 138);
	allForms[0] = greg.makeForm("Shrubbery Creation", "Arthur");
	allForms[1] = greg.makeForm("Robotomy Request", "Gerald");
	allForms[2] = greg.makeForm("Presidential Pardon", "Ford Prefect");

	allForms[0]->execute(steve);
	allForms[1]->execute(steve);
	allForms[2]->execute(steve);
	steve.SetGrade(5);
	allForms[0]->execute(steve);
	allForms[1]->execute(steve);
	allForms[2]->execute(steve);
	delete allForms[0];
	delete allForms[1];
	delete allForms[2];
	return (0);
}