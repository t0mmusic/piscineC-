#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>

class Intern {
	public:
		Intern( void );
		Intern( const Intern &copy );
		~Intern( void );

		Intern	&operator=( const Intern &assign );

	private:

};

#endif
