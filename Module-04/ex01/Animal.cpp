/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 14:54:38 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy Constructor !!" << std::endl;
	*this = other;
}

Animal& Animal::operator= (const Animal& other)
{
	std::cout << "Animal Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

std::string		Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound!!" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}
