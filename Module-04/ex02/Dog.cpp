/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 12:19:47 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this ->type = "Dog";
	this ->brain = new Brain();
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
	this ->brain = other.brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog Sound!!" << std::endl;
}

Dog::~Dog()
{
	delete this ->brain;
	std::cout << "Dog Destructor called\n";
}
