/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:51:31 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 18:12:43 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int randomVal = (rand() % NUMBER_DERIVED_CLASS) + 1;
	if (randomVal == 1)
		return (new A());
	else if (randomVal == 2)
		return (new B());
	return (new C());
}

void identify(Base* p)
{
	A *a = dynamic_cast < A* >(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast < B* >(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return;
	}
	std::cout << "C" << std::endl;
}


void identify(Base& p)
{
	try
	{
		A a = dynamic_cast < A& >(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast < B& >(p);
			std::cout << "B" << std::endl;
			return;
		}
		catch(const std::exception& e)
		{
			std::cout << "C" << std::endl;
		}
	}
}

void TestPointerIdentity()
{
	srand(time(0));
	for (int i = 0; i < 3; i++)
	{
		Base *p = generate();
		identify(p);
		delete p;
	}
}

void TestReferenceIdentity()
{
	srand(time(0));
	for (int i = 0; i < 3; i++)
	{
		Base *p = generate();
		identify(*p);
		delete p;
	}
}

int main()
{
	TestReferenceIdentity();
	return (0);
}