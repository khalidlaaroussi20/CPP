/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 15:02:18 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "animal";
	std::cout << "animal Default Constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal Copy Constructor !!" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator= (const AAnimal& other)
{
	std::cout << "Animal Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

std::string		AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal Sound!!" << std::endl;
}


AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called\n";
}
