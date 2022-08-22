/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:11:43 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 12:05:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form::Form("RRF", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ): Form::Form("RRF", 72, 45) {
	this->_target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

}

void		RobotomyRequestForm::beSigned( const Bureaucrat &bur ) {

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

void		RobotomyRequestForm::execute( Bureaucrat const &executor ) const{
	
	if (executor.GetGrade() <= this->getExeGrade())
	{
		srand(time(0));
		int	random = rand() % 2;

		std::cout << "LOUD DRILLING NOISE" << std::endl;
		if (random)
		{
			std::cout << _target << " has joined the ranks of our"
			<< " wonderful robot overlords." << std::endl;
		}
		else
		{
			std::cout << "Drill was jammed. " << _target
			<< " will have to remain human a little while longer." << std::endl;
		}
	}
	else
	{
		std::cout << _target << " doesn't have what it takes to be a"
		<< " part of the robolution." << std::endl;
	}

}
