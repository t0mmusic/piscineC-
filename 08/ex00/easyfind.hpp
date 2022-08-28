/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:13:16 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 11:53:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>

class	notFound: public std::exception {
	public :
		const char *what( void ) const throw();
};

template<typename T>
void	easyfind(T ctnr, int i);

#include "easyfind.tpp"

#endif
