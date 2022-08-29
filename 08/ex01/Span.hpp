/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:50:59 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 12:42:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span {
	public:
		Span( int N );
		Span( const Span &copy );
		~Span( void );

		Span	&operator=( const Span &assign );

		void	addNumber( int num );
		int		shortestSpan( void );
		int		longestSpan( void );

		class spanFull: public std::exception {
        	const char *what() const throw();
    	};
    	class spanEmpty: public std::exception {
    	    const char *what() const throw();
    	};

	private:
		std::vector<int>	_span;
		int					_min;
		int					_max;
		int					_short;
		unsigned int		_current;
		unsigned int		_total;

		Span( void );

};

#endif
