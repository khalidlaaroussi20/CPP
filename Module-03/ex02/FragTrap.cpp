/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:22:50 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 16:05:10 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor !!" << std::endl;
};


FragTrap::FragTrap(std::string 	name)
{

	std::cout << "FragTrap Parameterized Constructor !!" << std::endl;
	this ->name = name;
	this ->hit = DEFAULT_FRAG_HIT;
	this ->energy = DEFAULT_FRAG_ENERGY;
	this ->attackDamage = DEFAULT_FRAG_ATTACK_DAMAGE;
};


FragTrap::FragTrap (const FragTrap &other)
{
	std::cout << "FragTrap Copy Constructor !!" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator= (const FragTrap& other)
{
	std::cout << "FragTrap Assignement Operator !!" << std::endl;
	this ->name = other.name;
	this ->hit = other.hit;
	this ->energy = other.energy;
	this ->attackDamage = other.attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this ->name << " Want to High Five Someone" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor !!" << std::endl;
};
