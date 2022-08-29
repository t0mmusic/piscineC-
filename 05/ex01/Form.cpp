/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:10:27 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 13:28:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int sign_grade, int exe_grade ): _name(name), _sign_grade(sign_grade), _exe_grade(exe_grade) {
	this->CheckGrade(sign_grade);
	this->CheckGrade(exe_grade);
	this->_signed = false;
	std::cout << "********************************************************************" << std::endl;
	std::cout << "New form created." << std::endl
	<< "Name: " << this->_name << std::endl
	<< "Grade Required for Signing: " << this->_sign_grade << std::endl
	<< "Grade Required for Executing: " << this->_exe_grade << std::endl
	<< "Signed Status: " << this->_signed << std::endl;
	std::cout << "********************************************************************" << std::endl;
}

Form::Form( const Form &copy ): _name(copy.getName()), _sign_grade(copy.getSignGrade()), _exe_grade(copy.getExeGrade()) {
	this->CheckGrade(_sign_grade);
	this->CheckGrade(_exe_grade);
	this->_signed = copy.getSigned();
	std::cout << "********************************************************************" << std::endl;
	std::cout << "Form copy made." << std::endl
	<< "Name: " << this->_name << std::endl
	<< "Grade Required for Signing: " << this->_sign_grade << std::endl
	<< "Grade Required for Executing: " << this->_exe_grade << std::endl
	<< "Signed Status: " << this->_signed << std::endl;
	std::cout << "********************************************************************" << std::endl;
}

Form::~Form( void ) {
	std::cout << "********************************************************************" << std::endl;
	std::cout << this->_name << " has been cross shredded. Think on it no longer." << std::endl;
	std::cout << "********************************************************************" << std::endl;
}

std::string			Form::getName( void ) const{
	return (this->_name);
}

int					Form::getSignGrade( void ) const{
	return (this->_sign_grade);
}

int 				Form::getExeGrade( void ) const{
	return (this->_exe_grade);
}

bool				Form::getSigned( void ) const{
	return (this->_signed);
}

void				Form::setSigned( bool sign ){
	this->_signed = sign;
}

void				Form::beSigned( const Bureaucrat &bur ){
	
	if (this->_signed == true)
	{
		std::cout << this->_name << " has already been signed." << std::endl;
		return ;
	}
	
	int	bur_grade = bur.GetGrade();

	if (bur_grade > this->_sign_grade)
	{
		std::cout << bur.GetName() << " does not have a high enough grade to sign form " 
		<< this->_name << ". Grade is " << bur_grade 
		<< ", but must be " << this->_sign_grade << " or higher."
		<< std::endl;
		throw Form::GradeTooLowException();
	}
	else if (bur_grade <= this->_sign_grade && bur_grade > 0)
	{
		this->_signed = true;
		std::cout << bur.GetName() << " has successfully signed form "
		<< this->_name << "." << std::endl;
	}
	else
	{
		throw Form::GradeTooHighException();
	}
}

bool	Form::CheckGrade( int grade ) {
	if (grade < 1)
	{
		throw Form::GradeTooHighException();
		return (false);
	}
	else if (grade > 150)
	{
		throw Form::GradeTooLowException();
		return (false);
	}
	return (true);
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade not Acceptable For Form. Lower Grade Required.");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade not Acceptable For Form. Higher Grade Required.");
}

std::ostream	&operator << ( std::ostream &stream, const Form &form ) {
	stream
	<< "Name: " << form.getName() << std::endl
	<< "Grade Required for Signing: " << form.getSignGrade() << std::endl
	<< "Grade Required for Executing: " << form.getExeGrade() << std::endl
	<< "Signed Status: " << form.getSigned();
	return (stream);
}