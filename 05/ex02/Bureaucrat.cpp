/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:37:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 15:04:22 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade ): _name("Bob") {
	CheckGrade(grade);
	_grade = grade;
	std::cout << "\e[0;32m" << "Bureaucrat " << this->_name << " Born with " 
	<< this->_grade << " Grade." << "\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ):  _name(name) {
	CheckGrade(grade);
	_grade = grade;
	std::cout << "\e[0;32m" << "Bureaucrat " << this->_name << " Born with " 
	<< this->_grade << " Grade." << "\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.GetName()) {
	this->_grade = copy.GetGrade();
	std::cout << "\e[0;32m" << "Bureaucrat " << this->_name << " copied with " 
	<< this->_grade << " Grade." << "\e[0m" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "\e[0;35m" << "Bureaucrat " << this->_name 
	<< " has made an early retirement." << "\e[0m" << std::endl;
}

void		Bureaucrat::SetGrade( int grade ) {
	if (CheckGrade(grade))
	{
		this->_grade = grade;
		std::cout << _name << " is now a grade " 
		<< this->_grade << "." << std::endl;
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
	std::cout << "\e[0;32m" << "Bureaucrat " << this->_name
	<< " is now the same grade as " << assign.GetName() 
	<< ", Grade "<< this->_grade << "." << "\e[0m" << std::endl;
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

void		Bureaucrat::signForm( Form &form ) {
	if (form.getSigned() == true)
	{
		std::cout << this->_name << " has already been signed." << std::endl;
		return ;
	}
	
	int	form_grade = form.getSignGrade();

	if (form_grade < this->_grade)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		form.setSigned(true);
		std::cout << this->_name << " has successfully signed form " << 
		form.getName() << "." << std::endl;
	}
}

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur ) {
	stream << bur.GetName() << ", Bureaucrat grade " << bur.GetGrade() << ".";
	return (stream);
}