/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:00:31 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 15:36:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

	private:

		Brain	*doggyBrain;

	public:

		Dog( void );
		virtual ~Dog( void );

		Dog( const Dog &copy );
		Dog &operator=( const Dog &copy );

		void	makeSound( void ) const;

};

#endif