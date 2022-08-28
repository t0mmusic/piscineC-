/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:50:53 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 12:30:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void  iter(T *add, size_t len, void f(T &)) {
    for (size_t i = 0; i < len; i++)
    {
        f(add[i]);
    }
}

template <typename T>
void    printCurrent(T &c)
{
    std::cout << c;
}

template <typename T>
void    addTwo(T &a)
{
    a += 2;
}

#endif