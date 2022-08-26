/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:45:35 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 16:16:41 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>

class	Base
{
	public:
		virtual ~Base(){}
};

class	A: public Base{};
class	B: public Base{};
class	C: public Base{};

Base	*generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif