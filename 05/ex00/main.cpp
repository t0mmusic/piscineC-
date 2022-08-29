/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:10:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 09:29:22 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\e[1;94m" << "******CONSTRUCTOR TEST******" << "\e[0m" << std::endl;
	Bureaucrat	bob(1);
	// A copy will have the same name when instantiated like this
	std::cout << "\e[1;94m" << "******COPY TESTS******" << "\e[0m" << std::endl;
	Bureaucrat	steve(bob);
	Bureaucrat	greg("Greg", 25);
	// When copied this way, the name will not change as it is a constant value
	greg = bob;
	std::cout << "\e[1;94m" << "******HIGH GRADE EXCEPTION TESTS******" << "\e[0m" << std::endl;
	try
	{
		//Trying to set too high a grade will throw an exception
		bob.SetGrade(-10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		// Incrementing the grade higher than 1 (0 or less) will throw an exception
		std::cout << bob++ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bob << std::endl;
	std::cout << bob-- << std::endl;
	steve.SetGrade(150);
	std::cout << "\e[1;94m" << "******LOW GRADE EXCEPTION TESTS******" << "\e[0m" << std::endl;
	try
	{
		std::cout << steve-- << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		// The contructor will begin to create a new Bureaucrat, but throw an
		// exception when the grade is too low.
		Bureaucrat	robert("Robert", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\e[1;94m" << "******DESTRUCTOR TEST******" << "\e[0m" << std::endl;
	return (0);
}