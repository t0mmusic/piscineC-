#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

class PresidentialPardonForm {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &copy );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=( const PresidentialPardonForm &assign );

	private:

};

#endif
