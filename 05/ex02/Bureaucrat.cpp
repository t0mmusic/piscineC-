/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:37:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/10 11:41:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade ): _name("Bob"), _grade(grade) {
	std::cout << "********************************************************************" << std::endl;
	std::cout << "Bureaucrat " << this->_name << " Born with " << this->_grade << " Grade." << std::endl;
	std::cout << "********************************************************************" << std::endl;
	CheckGrade(grade);
}

Bureaucrat::Bureaucrat( std::string name, int grade ):  _name(name), _grade(grade) {
	std::cout << "********************************************************************" << std::endl;
	std::cout << "Bureaucrat " << this->_name << " Born with " << this->_grade << " Grade." << std::endl;
	std::cout << "********************************************************************" << std::endl;
	CheckGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	this->_grade = copy.GetGrade();
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "********************************************************************" << std::endl;
	std::cout << "Bureaucrat " << this->_name << " has made an early retirement." << std::endl;
	std::cout << "********************************************************************" << std::endl;
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

void		Bureaucrat::signForm( Form &form ){
	if (form.getSigned() == true)
	{
		std::cout << this->_name << " has already been signed." << std::endl;
		return ;
	}
	
	int	form_grade = form.getSignGrade();

	if (form_grade < this->_grade)
	{
		std::cout << this->_name << " does not have a high enough grade to sign form " << form.getName()
		<< ". Grade is " << this->_grade << ", but must be " << form_grade << " or higher."
		<< std::endl;
		throw Form::GradeTooLowException();
	}
	else
	{
		form.setSigned(true);
		std::cout << this->_name << " has successfully signed form " << 
		form.getName() << "." << std::endl;
	}
}

void		Bureaucrat::executeForm( Form const &form ){
	int	exe_form = form.getExeGrade();

	if (this->_grade > exe_form)
	{
		std::cout << this->_name << " does not have a high enough grade to execute form " << form.getName()
		<< ". Grade is " << this->_grade << ", but must be " << exe_form << " or higher."
		<< std::endl;
	}
	else
	{
		// execute(*this);
		std::cout << this->_name << " exectued " << form.getName() << "." << std::endl;
	}
}

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur ) {
	stream << bur.GetName() << ", Bureaucrat grade " << bur.GetGrade() << ".";
	return (stream);
}