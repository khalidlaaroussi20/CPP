/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:58:06 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 15:25:56 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor !!" << std::endl;
};


ClapTrap::ClapTrap(std::string 	name)
{

	std::cout << "ClapTrap Parameterized Constructor !!" << std::endl;
	this ->name = name;
	this ->hit = DEFAULT_HIT;
	this ->energy = DEFAULT_ENERGY;
	this ->attackDamage = DEFAULT_ATTACK_DAMAGE;
};


ClapTrap::ClapTrap (const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructor !!" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
	std::cout << "ClapTrap Assignement Operator !!" << std::endl;
	this ->name = other.name;
	this ->hit = other.hit;
	this ->energy = other.energy;
	this ->attackDamage = other.attackDamage;
	return (*this);
}

bool ClapTrap::isAlive()
{
	if (this ->energy > 0)
		return (true);
	std::cout << "Dosen't have enough energy !!" << std::endl;
	return (false);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this ->hit -= amount;
	if (this ->hit <= 0)
	{
		this ->hit = 0;
		std::cout << "ClapTrap " <<  name  << "  is Died !!" << std::endl;
	}
	else
		std::cout << "ClapTrap " <<  name  << " get damage  " << amount << " points of damage! causing " << this->hit << " points of hit!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (isAlive())
	{
		this ->energy--;
		std::cout << "ClapTrap " <<  name  << " attacks " << target << ",causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlive())
	{
		this ->energy--;
		this ->hit += amount;
		std::cout << "ClapTrap " <<  name  << " Repair with amount  " << amount << ",current hit  " << hit  << std::endl;
	}
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor !!" << std::endl;
};