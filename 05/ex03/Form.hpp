/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:10:24 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/11 09:29:21 by jbrown           ###   ########.fr       */
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
		virtual ~Form( void );

		Form	&operator=( const Form &assign );

		virtual std::string	getName( void ) const;
		virtual int			getSignGrade( void ) const;
		virtual int 		getExeGrade( void ) const;
		virtual bool		getSigned( void ) const;

		virtual void		setSigned( bool sign );

		virtual void		beSigned( const Bureaucrat &bur ) = 0;
		virtual void		execute( Bureaucrat const &executor ) const = 0;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	private:

		/*	Required for Orthodox Canonical Form but not used in this Class. */
		Form( void );

		std::string const	_name;
		int const			_sign_grade;
		int const			_exe_grade;
		bool				_signed;

	protected:

		std::string	_target;

		void		setTarget( std::string target );
		std::string	getTarget( void ) const;

};

std::ostream	&operator << ( std::ostream &stream, const Form &form );

#endif
