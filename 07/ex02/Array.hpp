/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:38:11 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 13:43:23 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array {
	public:
		Array( void );
		Array( unsigned int n );
		Array( const Array &copy );
		~Array( void );

		Array	<T>&operator=( const Array &assign );
		T		&operator[]( unsigned int idx );

		unsigned int	size( void );

		class outOfBounds: public std::exception {
			char const *what(void) const throw();
		};

	private:
		T				*_array;
		unsigned int	_len;

		void	copyArray(T *src);

};

//included at bottom to prevent circular inclusion
#include "Array.tpp"

#endif
