/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:50:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 13:38:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( int N ) {
	_total = N;
	_max = 0;
	_min = 0;
	_short = 0;
	_current = 0;
}

Span::Span(const Span &copy) {
	(void)copy;
}

Span::~Span() {

}

Span	&Span::operator=(const Span &assign) {
	(void)assign;
	return (*this);
}

void	Span::addNumber( int num ) {
	if (_total == _current)
		throw spanFull();
	_span.push_back(num);
	//sorts the vector each time a new value is added
	sort(_span.begin(), _span.end());
	_current++;
	if (num > _max || !_max)
		_max = num;
	if (num < _min || !_min)
		_min = num;
}

int		Span::shortestSpan( void ) {
	if (_current < 2)
	{
		throw spanEmpty();
	}
	std::vector<int>::iterator current = _span.begin();
	std::vector<int>::iterator next = current;
	next++;
	_short = *next - *current;
	while (next != _span.end())
	{
		if (*next - *current < _short)
			_short = *next - *current;
		current++;
		next++;
	}
	return (_short);
}

int		Span::longestSpan( void ) {
	if (_current < 2)
	{
		throw spanEmpty();
	}
	return (_max - _min);
}

const char *Span::spanFull::what() const throw() {
	return ("No New Values Can Be Added to this Span!");
}

const char *Span::spanEmpty::what() const throw() {
	return ("Not Enough Values to Determine Span!");
}
