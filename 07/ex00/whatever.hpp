/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:30:45 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 09:49:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <class T> void swap(T &a, T &b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

template <class T> T    min(T &a, T &b) {
	return (a < b) ? a : b;
}

template <class T> T    max(T &a, T &b) {
	return (a > b) ? a : b;
}

#endif