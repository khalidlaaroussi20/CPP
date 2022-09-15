/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:58:06 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 11:55:17 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor !!" << std::endl;
};


DiamondTrap::DiamondTrap(std::string 	name) : ScavTrap(name)
{
	std::cout << "DiamondTrap Parameterized Constructor !!" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this ->name = name;
	this ->hit = FragTrap::hit;
	this ->energy = ScavTrap::energy;
	this ->attackDamage = DEFAULT_FRAG_ATTACK_DAMAGE;
	std::cout << "name = " << ClapTrap::name << " hit = " << this->hit << " energy = " << this ->energy << " attackDamage = " << this ->attackDamage << std::endl;
}


DiamondTrap::DiamondTrap (const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy Constructor !!" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& other)
{
	std::cout << "DiamondTrap Assignement Operator !!" << std::endl;
	this ->name = other.name;
	this ->hit = other.hit;
	this ->energy = other.energy;
	this ->attackDamage = other.attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name = " << this->name << " And ClapTrap Name = " << ClapTrap::name <<  std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor !!" << std::endl;
};