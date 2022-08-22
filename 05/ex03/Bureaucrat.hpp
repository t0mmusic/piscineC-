/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:37:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/10 15:05:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
	
	public:
		Bureaucrat( int grade );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

		Bureaucrat	&operator=( const Bureaucrat &assign );
		Bureaucrat	&operator++( int );
		Bureaucrat	&operator--( int );

		void		SetGrade( int grade );

		std::string	GetName( void ) const;
		int			GetGrade( void ) const;

		bool		CheckGrade( int grade );
		void		signForm( Form &form );
		void		executeForm( Form const &form );

	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw();
	};

	private:

		Bureaucrat( void );

		std::string const	_name;
		int					_grade;

};

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur );

#endif
