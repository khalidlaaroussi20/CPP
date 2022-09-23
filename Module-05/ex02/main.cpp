/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:49:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:28:49 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void Test()
{
	Bureaucrat b = Bureaucrat("khalid",100);
	std::cout << b << std::endl;
	Form *f = new ShrubberyCreationForm("target");
	std::cout << *f << std::endl;
	f->beSigned(b);
	std::cout << *f << std::endl;
	b.executeForm(*f);
	
	delete f;
	
}

void Test1()
{
	Bureaucrat b = Bureaucrat("khalid",100);
	std::cout << b << std::endl;
	Form *f = new RobotomyRequestForm("target");
	std::cout << *f << std::endl;
	f->beSigned(b);
	std::cout << *f << std::endl;
	b.executeForm(*f);
	delete f;
	
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

void Test3()
{
	Bureaucrat b = Bureaucrat("khalid",40);
	std::cout << b << std::endl;
	Form *f = new PresidentialPardonForm("target");
	std::cout << *f << std::endl;
	f->beSigned(b);
	std::cout << *f << std::endl;
	b.executeForm(*f);
	delete f;
	
}

void Test4()
{
	Bureaucrat b = Bureaucrat("khalid",2);
	std::cout << b << std::endl;
	Form *f = new PresidentialPardonForm("target");
	std::cout << *f << std::endl;
	f->beSigned(b);
	std::cout << *f << std::endl;
	b.executeForm(*f);
	delete f;
	
}


int RobotomyRequestForm::count = 0;

int main()
{
	try
	{
		Test4();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what()<< '\n';
	}
	return (0);
}