/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:34:34 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 15:08:41 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

using namespace std;

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form::Form("SCF", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ): Form::Form("SCF", 145, 137) {
	this->_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

}

void		ShrubberyCreationForm::beSigned( const Bureaucrat &bur ) {

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

void		ShrubberyCreationForm::execute( Bureaucrat const &executor ) const{
	
	if (executor.GetGrade() <= this->getExeGrade())
	{
		std::string outfile = this->_target + "_shrubbery";
		std::ofstream	shrub(outfile);

		std::cout << "It's shrubbin' time." << std::endl;
		shrub << 
		"             .o00o\n"
		"           o000000oo\n"
		"           00000000000o\n"
		"           00000000000000\n"
		"       oooooo  00000000  o88o\n"
		"   ooOOOOOOOoo  ```''  888888\n"
		"   OOOOOOOOOOOO'.qQQQQq. `8888'\n"
		"oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
		"OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
		"   OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
		"   OOOOOOOOO `QQQQQQ/ /QQ'\n"
		"       OO:F_P:O `QQQ/  /Q'\n"
		"       \\. / |  // |\n"
		"       d\\ \\|_// \n"
		"       qP| \\ _' `|Ob\n"
		"           \\ / \\  \\Op\n"
		"            |  | O| |.\n"
		"   _       /.. ._/ /. \n"
		"   `---__/|_\\   //|  __\n"
		"           `-'  `-'`-'-'   \n" << std::endl;
		shrub.close();
	}
	else
	{
		std::cout << executor.GetName() << " must first cut down the tallest tree"
		<< " in the forest with this herring.\n" << std::endl
		<<
		"   	     /`·.¸\n"
		"	    /¸...¸`:·\n"
		"	¸.·´  ¸   `·.¸.·´)\n"
		"	: © ):´;      ¸  {\n"
		"	`·.¸ `·  ¸.·´\\·¸)\n"
		"		`\\´´\\\n"
		<< std::endl;
	}
	
}