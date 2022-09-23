/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:49:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 13:32:19 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

void Test()
{
	Bureaucrat b = Bureaucrat("khalid",40);
	std::cout << b << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm(SHRUBBERY_CREATION_NAME, "Bender");
	std::cout << *rrf << std::endl;
	rrf->beSigned(b);
	std::cout << *rrf << std::endl;
	b.executeForm(*rrf);
	delete rrf;
	
}

void Test2()
{
	Bureaucrat b = Bureaucrat("khalid",40);
	std::cout << b << std::endl;
	Form *f = new RobotomyRequestForm("target");
	std::cout << *f << std::endl;
	f->beSigned(b);
	std::cout << *f << std::endl;
	for (int i = 0; i < 10; i++)
		b.executeForm(*f);
	delete f;
	
}



int RobotomyRequestForm::count = 0;

int main()
{
	try
	{
		Test();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what()<< '\n';
	}
	return (0);
}