/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:49:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 13:53:31 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Test()
{
	Bureaucrat b = Bureaucrat("khalid",10);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementtGrade();
	std::cout << b << std::endl;
	
}

void Test1()
{
	Bureaucrat b = Bureaucrat("khalid",1);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
}
void Test2()
{
	Bureaucrat b = Bureaucrat("khalid",149);
	std::cout << b << std::endl;
	b.decrementtGrade();
	std::cout << b << std::endl;
	b.decrementtGrade();
	std::cout << b << std::endl;
}

int main()
{
	try
	{
		Test2();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what()<< '\n';
	}
	return (0);
}