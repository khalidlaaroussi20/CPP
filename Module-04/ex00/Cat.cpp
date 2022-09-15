/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 14:51:57 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this ->type = "Cat";
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
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat Sound!!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}
