/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 14:52:02 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this ->type = "Dog";
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog (const Dog &other)
{
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog& Dog::operator= (const Dog& other)
{
	std::cout << "Dog Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog Sound!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}
