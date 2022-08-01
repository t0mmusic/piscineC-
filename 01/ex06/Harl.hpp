/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:28:33 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 11:33:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl{

	public:

	Harl(void);
	~Harl(void);

	void	complain( std::string level );

	private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif