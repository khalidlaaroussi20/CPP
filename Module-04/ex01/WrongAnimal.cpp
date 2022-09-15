/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:00:31 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!!" << std::endl;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal Destructor called\n";
}
