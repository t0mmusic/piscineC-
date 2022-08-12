/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:10:24 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/10 10:20:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

/*	Prevents Circular Inclusion.	*/
class Bureaucrat;

class Form {
	public:
		Form( std::string name, int sign_grade, int exe_grade );
		Form( const Form &copy );
		~Form( void );

		Form	&operator=( const Form &assign );

		std::string			getName( void ) const;
		int					getSignGrade( void ) const;
		int 				getExeGrade( void ) const;
		bool				getSigned( void ) const;

		void				setSigned( bool sign );

		void				beSigned( const Bureaucrat &bur );

	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	private:

		Form( void );

		std::string const	_name;
		int const			_sign_grade;
		int const			_exe_grade;
		bool				_signed;

};

std::ostream	&operator << ( std::ostream &stream, const Form &form );

#endif