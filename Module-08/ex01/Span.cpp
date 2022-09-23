/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:21:51 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/21 10:56:58 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
};


Span::Span(unsigned int size)
{
	_size = size;
};


Span::Span (const Span &other)
{
	*this = other;
}

Span& Span::operator= (const Span& other)
{
	_span = other._span;
	_size = other._size;
	return (*this);
}

bool Span::_isSpanFull() const
{
	return (_span.size() == _size);
}

void Span::addNumber(int number)
{
	if (_isSpanFull())
		throw Span::SpanFullException();
	_span.insert(number);
}


int Span::shortestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpanFoundException();
	int	shortestDistance = MAX_INT;
	std::multiset<int>::iterator it = _span.begin();
	std::multiset<int>::iterator next = ++it;
	it--;
    for (; next != _span.end(); it++, next++)
	{
		int currDistance = (*next) - (*it);
		if (currDistance < shortestDistance)
			shortestDistance = currDistance;
	}
	return (shortestDistance);
}

int	Span::longestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpanFoundException();
	std::multiset<int>::iterator begin = _span.begin();
	std::multiset<int>::iterator end = _span.end();
	end--;
	int longestDistance = (*end) - (*begin);
	return (longestDistance);
}

Span::~Span()
{
};