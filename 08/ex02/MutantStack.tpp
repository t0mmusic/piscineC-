/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:45:25 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 14:49:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ): std::stack<T>() {

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>() {
	this->c = copy.c;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {

}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &assign) {
	this->c = assign.c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end(void) {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::rbegin(void) {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::rend(void) {
	return (this->c.rend());
}