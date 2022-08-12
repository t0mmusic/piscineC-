/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:37:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/05 15:01:30 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade ): _name("Bob"), _grade(grade) {
	std::cout << "Bureaucrat " << this->_name << " Born with " << this->_grade << " Grade." << std::endl;
	CheckGrade(grade);
}

Bureaucrat::Bureaucrat( std::string name, int grade ):  _name(name), _grade(grade) {
	std::cout << "Bureaucrat " << this->_name << " Born with " << this->_grade << " Grade." << std::endl;
	CheckGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	this->_grade = copy.GetGrade();
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat " << this->_name << " has made an early retirement." << std::endl;
}

void		Bureaucrat::SetGrade( int grade ) {
	if (CheckGrade(grade))
	{
		this->_grade = grade;
		std::cout << this->_grade << std::endl;
	}
	else
	{
		std::cout << "Grade unchanged." << std::endl;
	}
}

std::string	Bureaucrat::GetName( void ) const {
	return (this->_name);
}

int			Bureaucrat::GetGrade( void ) const {
	return (this->_grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &assign) {
	this->_grade = assign.GetGrade();
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++( int ) {
	if (CheckGrade(this->_grade - 1))
	{
		this->_grade--;
	}
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--( int ) {
	if (CheckGrade(this->_grade + 1))
	{
		this->_grade++;
	}
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high! It's too much to handle!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low! Get this loser outta here!");
}

bool	Bureaucrat::CheckGrade( int grade ) {
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return (false);
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return (false);
	}
	return (true);
}

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur ) {
	stream << bur.GetName() << ", Bureaucrat grade " << bur.GetGrade() << ".";
	return (stream);
}