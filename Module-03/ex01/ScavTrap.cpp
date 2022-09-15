/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:22:50 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 11:03:07 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor !!" << std::endl;
	this ->name = name;
	this ->hit = DEFAULT_SCAV_HIT;
	this ->energy = DEFAULT_SCAV_ENERGY;
	this ->attackDamage = DEFAULT_SCAV_ATTACK_DAMAGE;
};


ScavTrap::ScavTrap(std::string 	name)
{

	std::cout << "ScavTrap Parameterized Constructor !!" << std::endl;
	this ->name = name;
	this ->hit = DEFAULT_SCAV_HIT;
	this ->energy = DEFAULT_SCAV_ENERGY;
	this ->attackDamage = DEFAULT_SCAV_ATTACK_DAMAGE;
};


ScavTrap::ScavTrap (const ScavTrap &other)
{
	std::cout << "ScavTrap Copy Constructor !!" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other)
{
	std::cout << "ScavTrap Assignement Operator !!" << std::endl;
	this ->name = other.name;
	this ->hit = other.hit;
	this ->energy = other.energy;
	this ->attackDamage = other.attackDamage;
	return (*this);
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this ->name << " is guarding now !!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor !!" << std::endl;
};
