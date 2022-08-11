/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:10:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/11 10:36:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat				steve("Steve", 45);
	RobotomyRequestForm		form("Office");
	ShrubberyCreationForm	shrub("Forest");

	form.execute(steve);
	shrub.execute(steve);
	steve.SetGrade(138);
	shrub.execute(steve);
	return (0);
}