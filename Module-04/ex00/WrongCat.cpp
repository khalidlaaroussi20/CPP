/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:01:21 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this ->type = "WrongCat";
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat (const WrongCat &other)
{
	std::cout << "WrongCat Copy constructor called\n";
	*this = other;
}

WrongCat& WrongCat::operator= (const WrongCat& other)
{
	std::cout << "WrongCat Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}
