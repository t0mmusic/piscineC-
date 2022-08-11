/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:10:15 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/11 09:13:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class RobotomyRequestForm: public Form {
	
	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &copy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=( const RobotomyRequestForm &assign );

		void	beSigned( const Bureaucrat &bur );
		void	execute( Bureaucrat const &executor ) const;

	private:

		RobotomyRequestForm( void );
};

#endif
