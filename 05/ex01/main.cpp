/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:10:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 14:07:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	steve("Steve", 25);
	Form		from("FTID42", 24, 1);

	std::cout << steve << std::endl << from << std::endl;
	try
	{
		Form	reject("No", -10, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		steve.signForm(from);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		from.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	steve++;
	steve.signForm(from);
	from.beSigned(steve);

	return (0);
}