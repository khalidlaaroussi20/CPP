/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 13:34:12 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	//std::cout << "Character Default Constructor called\n";
	this ->initInventory();
	size = 0;
}

Character::Character(std::string name) : name(name)
{
	//std::cout << "Character Parameterized Constructor !!" << std::endl;
	this ->initInventory();
	size = 0;
}


Character::Character(const Character &other)
{
	//std::cout << "Character Copy Constructor !!" << std::endl;
	*this = other;
}

Character& Character::operator= (const Character& other)
{
	//std::cout << "Character Copy assignment operator called\n";
	this ->name = other.getName();
	for (int i = 0; i < this ->size; i++)
	{
		AMateria *tmp = inventory[i];
		inventory[i] = tmp->clone();
		delete tmp;
	}
	return (*this);
}

void	Character::initInventory()
{
	for (int i = 0; i < SIZE_INVENTORY; i++)
		inventory[i] = nullptr;
}


std::string const & Character::getName() const
{
	return (this ->name);
}

bool	Character::isInventoryFull() const
{
	if (size == SIZE_INVENTORY)
	{
		std::cout << "Inventory is Full !!" << std::endl;
		return (true);
	}
	return (false);
}

bool	Character::isMateriaExist(int idx) const
{
	if (idx < 0 || idx >= SIZE_INVENTORY || inventory[idx] == nullptr)
	{
		std::cout << "Material Not exist !!" << std::endl;
		return (false);
	}
	return (true);
}

unsigned int Character::getIdxFreeInventorySlot()
{
	int i;
	for (i = 0; i < SIZE_INVENTORY; i++)
		if (inventory[i] == nullptr)
			break;
	return  (i);
	
}

void	Character::equip(AMateria* m)
{
	if (m == nullptr)
	{
		std::cout << "the materia is NULL !!" << std::endl;
	}
	else if (!isInventoryFull())
	{
		int idxFreeSlot = getIdxFreeInventorySlot();
		inventory[idxFreeSlot] = m;
		size++;
	}
}

void	Character::unequip(int idx)
{
	if (isMateriaExist(idx))
	{
		inventory[idx] = nullptr;
		size--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (isMateriaExist(idx))
	{
		AMateria *m = inventory[idx];
		m ->use(target);
	}
}


Character::~Character()
{
	//std::cout << "Character Destructor called\n";
	for (int i = 0; i < SIZE_INVENTORY; i++)
	{
		if (inventory[i])
			delete inventory[i];	
	}
}
