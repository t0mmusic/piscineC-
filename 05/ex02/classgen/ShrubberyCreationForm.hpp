#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>

class ShrubberyCreationForm {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &assign );

	private:

};

#endif
