/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 11:16:53 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	type = "ice";
	//std::cout << "Ice Default Constructor called\n";
}


Ice::Ice(const Ice &other)
{
	//std::cout << "Ice Copy Constructor !!" << std::endl;
	*this = other;
}

Ice& Ice::operator= (const Ice& other)
{
	//std::cout << "Ice Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *"  << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice Destructor called\n";
}
