/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:51:42 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/11 09:08:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form::Form("PPF", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ): Form::Form("PPF", 25, 5) {
	this->_target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

}

void		PresidentialPardonForm::beSigned( const Bureaucrat &bur ) {

	int	bur_grade = bur.GetGrade();
	int	sign_grade = this->getSignGrade();

	if (this->getSigned() == true)
	{
		std::cout << this->getName() << " has already been signed." << std::endl;
		return ;
	}
	if (bur_grade <= sign_grade)
	{
		this->setSigned(true);
	}
	else
	{
		throw Form::GradeTooLowException();
	}
	
}

void		PresidentialPardonForm::execute( Bureaucrat const &executor ) const{
	
	if (executor.GetGrade() <= this->getExeGrade())
	{
		std::cout << executor.GetName() << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
	}
	else
	{
		std::cout << executor.GetName() << " may need to buy the president a few more"
		<< " pan galactic gargle blasters." << std::endl;
	}
	
}