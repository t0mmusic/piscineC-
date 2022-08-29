/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:51:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/25 14:58:02 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class PresidentialPardonForm: public Form {
	
	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &copy );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=( const PresidentialPardonForm &assign );

		void	beSigned( const Bureaucrat &bur );
		void	execute( Bureaucrat const &executor ) const;

	private:

		PresidentialPardonForm( void );

};

#endif
