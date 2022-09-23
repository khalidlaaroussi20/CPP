/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:18:17 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/20 15:54:37 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define MAX_INT 2147483647

#include <iostream>
#include <string>
#include <vector>
#include<iterator>
#include<array>
#include<tuple>
#include <algorithm>
#include <set>



class Span
{
	private :
		unsigned int _size;
		std::multiset <int> _span;
		Span();
		bool _isSpanFull() const;
		
	public:
		Span(unsigned int size);
		Span (const Span &other);
		
		// Operators 
		Span& operator= (const Span& other);

		//methods
		void	addNumber(int number);
		template <typename T>
		void addNumber(T &container)
		{
			typename T::iterator iter = container.begin();
			typename T::iterator end = container.end();
			for (; iter != end; ++iter)
			{
				addNumber(*iter);
			}
		}
		
		int		shortestSpan();
		int		longestSpan();

		//exception
		class SpanFullException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "Span is Full";
				}
		};

		class NoSpanFoundException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "No Span Found!!";
				}
		};
		
		~Span();
};
#endif