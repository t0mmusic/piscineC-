/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:02:50 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:34:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

public:

	WrongCat( void );
	~WrongCat( void );

	WrongCat( const WrongCat &copy );
	WrongCat &operator=( const WrongCat &copy );

	void	makeSound( void ) const;
	
};

#endif