/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:05:49 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 12:05:50 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		Brain( void );
		Brain( const Brain &copy );
		~Brain( void );

		Brain	&operator=( const Brain &assign );

	private:
		std::string	_ideas[100];

};

#endif
