/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:11:41 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 14:33:45 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA( void )
// {
// 	std::cout << "HumanA Constructure !!" << std::endl;
// }

HumanA::HumanA( std::string name, Weapon &w) : weapon(w)
{
	this ->name = name;
}

Weapon &HumanA::getWeapon()
{
	return (this ->weapon);
}

void	HumanA::setWeapon(Weapon	&weapon)
{
	this ->weapon = weapon;
}


void	HumanA::attack( void )
{
	std::cout << this ->name << " attacks with their " << this ->weapon.getType() << std::endl;
}


HumanA::~HumanA( void )
{
	std::cout << "HumanA Destructor !!" << std::endl;
}

