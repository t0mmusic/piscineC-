/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:50:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 14:55:07 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( int N ) {
	_total = N;
	_short = 0;
	_current = 0;
}

Span::Span(const Span &copy) {
	//turns out vectors do deep copies by default. Cool
	_span = copy._span;
	_total = copy._total;
	_short = copy._short;
	_current = copy._current;
	_max = copy._max;
	_min = copy._min;
}

Span::~Span() {

}

Span	&Span::operator=(const Span &assign) {
	_span = assign._span;
	_total = assign._total;
	_short = assign._short;
	_current = assign._current;
	_max = assign._max;
	_min = assign._min;
	return (*this);
}

// inserts numbers in order into the vector
// this implementation is sadly slightly less efficient
// than just sorting the vector afterwards
void	findPosition( int num, std::vector<int> &vec ) {
	std::vector<int>::iterator	current, next;
	current = vec.begin();
	if (vec.empty() || num <= *current)
	{
		vec.insert(vec.begin(), num);
		return ;
	}
	next = vec.begin() + 1;
	while (next != vec.end())
	{
		if (num >= *current && num <= *next)
		{
			break ;
		}
		current++;
		next++;
	}
	vec.insert(next, num);
}

void	Span::addNumber( int num ) {
	if (_total == _current)
		throw spanFull();
	// findPosition(num, _span);
	_span.push_back(num);
	if (!_current)
	{
		_max = num;
		_min = num;
	}
	_current++;
	if (num > _max)
		_max = num;
	if (num < _min)
		_min = num;
}

int		Span::shortestSpan( void ) {
	if (_current < 2)
	{
		throw spanEmpty();
	}
	sort(_span.begin(), _span.end());
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
