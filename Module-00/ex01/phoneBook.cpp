/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:39:51 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 12:43:19 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->size = 0;
	this->curr_idx = 0;
	//std::cout << "PhoneBook Constructure !";
}

void PhoneBook::add(Contact contact)
{
	this ->phonesBook[curr_idx] = contact;
	if (size != MAX_SIZE)
		size++;
	curr_idx = (curr_idx + 1) % MAX_SIZE; 
}
bool	PhoneBook::isExist(int id)
{
	if (id < 0 || id >= size)
	{
		std::cout << "Not Found !!" << std::endl;
		return (false);
	}
	return (true);
}

Contact PhoneBook::search(int id)
{
	return (this ->phonesBook[id]);
}


