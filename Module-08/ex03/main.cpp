/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:52:08 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/21 18:46:11 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack; //5 3 5 737 0 
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> s(mstack);
	std::cout << "MutanStack S = \n\n\n\n";
	MutantStack<int>::iterator s_it = s.begin();
	MutantStack<int>::iterator s_ite = s.end();
	while (s_it != s_ite)
	{
		std::cout << *s_it << std::endl;
		++s_it;
	}

	std::deque <int> a;
	
	return 0;
}
