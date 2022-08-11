#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

class RobotomyRequestForm {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm &copy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=( const RobotomyRequestForm &assign );

	private:

};

#endif
