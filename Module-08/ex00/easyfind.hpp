/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:38:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/21 14:15:45 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include<iterator>
#include<array>
#include<tuple>
#include <algorithm>



class NotFoundException : public std::exception {
	public:
		const char* what() const throw()
		{
			return "element Not found!!";
		}
};

template <typename T>
void easyfind(T &container, int number)
{
	typename T::iterator begin = container.begin();
	typename T::iterator end = container.end();
	if (std::find(begin, end, number) == end)
		throw NotFoundException();
	else
		std::cout << "Element Exist !!" << std::endl; 
}

#endif