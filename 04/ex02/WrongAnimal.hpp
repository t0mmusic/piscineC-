/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:02:26 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:34:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:

	std::string	type;

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &copy );
	WrongAnimal( std::string type );
	virtual ~WrongAnimal( void );

	WrongAnimal &operator=( const WrongAnimal &copy );

	void		makeSound( void ) const;
	std::string	getType( void ) const;
};

#endif