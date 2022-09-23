/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:24:32 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/21 18:48:47 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <array>
#include <tuple>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>


template<typename T>
class MutantStack : public std::stack <T>
{
	public :
		typedef typename std::deque<T>::iterator iterator;
		
		MutantStack()
		{
			std::cout << "Default Constructure!!" << std::endl;
		}
		
		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}

		~MutantStack()
		{
			std::cout << "Destructor !!" << std::endl;
		}
};

#endif