/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:40:30 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 13:52:20 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) {
	_array = new T[0];
	_len = 0;
}

template <typename T>
Array<T>::Array( unsigned int n ) {
	_array = new T[n];
	_len = n;
}

template <typename T>
Array<T>::Array(const Array &copy) {
	_array = new T[copy._len];
	_len = copy._len;
	this->copyArray(copy._array);
}

template <typename T>
Array<T>::~Array() {
	delete _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &assign) {
	_array = new T[assign._len];
	_len = assign._len;
	this->copyArray(assign._array);
	return (*this);
}

template <typename T>
T	&Array<T>::operator[]( unsigned int idx ) {
	if (idx < _len)
		return (_array[idx]);
	throw Array::outOfBounds();
}

template <typename T>
unsigned int	Array<T>::size( void ) {
	return (_len);
}

template <typename T>
void	Array<T>::copyArray(T *src) {
	for (unsigned int i = 0; i < _len; i++)
	{
		_array[i] = src[i];
	}
}

template <typename T>
char const* Array<T>::outOfBounds::what() const throw() {
    return("Invalid Index for array.");
}

#endif