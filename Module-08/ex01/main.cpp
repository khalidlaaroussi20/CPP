/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:43:21 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/20 15:57:40 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Test()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void Test1()
{
	Span sp = Span(5);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void AddRange()
{
	std::vector <int> v;
	
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);
	Span sp = Span(15);
	sp.addNumber(v);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}


int main()
{
	try
	{
		Test1();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}