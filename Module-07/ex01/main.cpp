/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:08:31 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/19 14:25:08 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void addOne(int &c)
{
	c++;
}


void square(int &c)
{
	c *= 2;
}


void putA(char &c)
{
	c = 'a';
}

void Test1()
{
	int array[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl << "After \n\n";
	iter(array, 5 , addOne);
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void Test2()
{
	int array[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl << "After \n\n";
	iter(array, 5 , square);
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}


void Test3()
{
	char s[9] = "khalid!!";
	std::cout << s << std::endl << "After \n\n";
	iter(s, 8 , putA);
	std::cout << s << std::endl;
}


int main()
{
	Test1();
	return (0);
}