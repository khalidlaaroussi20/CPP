/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:11:41 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 14:38:05 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void )
{
	this ->name = "";
	this ->weapon = NULL;
	std::cout << "HumanB Constructure !!" << std::endl;
}

HumanB::HumanB( std::string name)
{
	this ->weapon = NULL;
	this ->name = name;
}

HumanB::HumanB( std::string name,  Weapon	&weapon)
{
	this ->name = name;
	this ->weapon = &weapon;
}

Weapon &HumanB::getWeapon()
{
	return (*this ->weapon);
}

void	HumanB::setWeapon(Weapon	&weapon)
{
	this ->weapon = &weapon;
}


void	HumanB::attack( void )
{
	std::cout << this ->name << " attacks with ";
	if (this ->weapon)
		std::cout << "their " << this->weapon->getType();
	else
		std::cout << "No Weapon !!";
	std::cout << std::endl;
}


HumanB::~HumanB( void )
{
	
	std::cout << "HumanB Destructor !!" << std::endl;
}

