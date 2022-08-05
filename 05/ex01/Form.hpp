#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Form {
	public:
		Form( void );
		Form( std::string name, int sign_grade, int exe_grade );
		Form( const Form &copy );
		~Form( void );

		Form	&operator=( const Form &assign );

	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	private:

		std::string const	_name;
		int const			_sign_grade;
		int const			_exe_grade;
		bool				_signed;

};

#endif
