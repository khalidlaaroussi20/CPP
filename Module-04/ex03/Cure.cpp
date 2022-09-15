/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 11:16:40 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"


Cure::Cure()
{
	type = "cure";
	//std::cout << "Cure Default Constructor called\n";
}


Cure::Cure(const Cure &other)
{
	//std::cout << "Cure Copy Constructor !!" << std::endl;
	*this = other;
}

Cure& Cure::operator= (const Cure& other)
{
	//std::cout << "Cure Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target.getName() << "'s wounds *"  << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure Destructor called\n";
}
