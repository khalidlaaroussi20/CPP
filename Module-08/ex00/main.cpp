/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:49:59 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/21 14:15:27 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void Test()
{
	std::vector <int> v;
	
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);
	::easyfind(v, 4);
	
}

void Test1()
{
	std::vector <int> v;
	
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);
	::easyfind(v, -1);
	
}

void Test2()
{
	std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	
	::easyfind(ar, 4);
	
}


void Test3()
{
	std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	
	::easyfind(ar, 0);
	
}

int main()
{
	try
	{
		Test3();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}