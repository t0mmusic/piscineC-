/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:50:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/30 14:18:44 by jbrown           ###   ########.fr       */
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

void	Span::addNumber( int num ) {
	if (_total == _current)
		throw spanFull();
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

//adds random values to Span in input quantity
void	Span::addNumbers( int quant ) {
	if (quant + _current > _total)
	{
		throw spanFull();
	}
	srand((unsigned)time(0));
	for (int i = 0; i < quant; i++)
    {
        int random = rand() % 10000000000;
        this->addNumber(random);
    }
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
