/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:49:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 15:23:42 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void Test()
{
	Bureaucrat b = Bureaucrat("khalid",100);
	std::cout << b << std::endl;
	Form f = Form("form", false, 10,10);
	std::cout << f << std::endl;
	b.signForm(f);
	
}

void Test1()
{
	Bureaucrat b = Bureaucrat("khalid",100);
	std::cout << b << std::endl;
	Form f = Form("form", false, 110,110);
	f.beSigned(b);
	b.signForm(f);
}


int main()
{
	try
	{
		Test1();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what()<< '\n';
	}
	return (0);
}