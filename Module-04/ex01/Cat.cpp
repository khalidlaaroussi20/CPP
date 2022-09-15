/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 12:16:31 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this ->type = "Cat";
	this ->brain = new Brain();
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat (const Cat &other)
{
	std::cout << "Cat Copy constructor called\n";
	*this = other;
}

Cat& Cat::operator= (const Cat& other)
{
	std::cout << "Cat Copy assignment operator called\n";
	this ->type = other.type;
	this ->brain = other.brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat Sound!!" << std::endl;
}

Cat::~Cat()
{
	delete this ->brain;
	std::cout << "Cat Destructor called\n";
}
