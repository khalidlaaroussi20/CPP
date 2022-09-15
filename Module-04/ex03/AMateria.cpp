/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 11:16:00 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	type = "AMateria";
	//std::cout << "AMateria Default Constructor called\n";
}

AMateria::AMateria(std::string const & type)
{
	//std::cout << "AMateria Parameterized Constructor !!" << std::endl;
	this ->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	//std::cout << "AMateria Copy Constructor !!" << std::endl;
	*this = other;
}

AMateria& AMateria::operator= (const AMateria& other)
{
	//std::cout << "AMateria Copy assignment operator called\n";
	this ->type = other.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria use " <<  target.getName() << " *"  << std::endl;
}


AMateria::~AMateria()
{
	//std::cout << "AMateria Destructor called\n";
}
