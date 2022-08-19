/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:01:53 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 08:56:42 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	
	private:

		Brain	*kittyBrain;

	public:

		Cat( void );
		virtual ~Cat( void );
		
		Cat( const Cat &copy );
		Cat &operator=( const Cat &copy );

		void	makeSound( void ) const;
		void	printThought( void ) const;

};

#endif