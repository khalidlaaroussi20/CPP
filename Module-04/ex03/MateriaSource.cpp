/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:22:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 11:53:09 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource Default Constructor called\n";
	size = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	//std::cout << "MateriaSource Copy Constructor !!" << std::endl;
	*this = other;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& other)
{
	//std::cout << "MateriaSource Copy assignment operator called\n";
	this ->size = other.size;
	for (int i = 0; i < size;i++)
		this->materias[i] = other.materias[i];
	return (*this);
}

bool	MateriaSource::isMateriasSourceFull() const
{
	if (size == SIZE_MATERIAS_SOURCE)
	{
		std::cout << "MATERIAS_SOURCE is Full !!" << std::endl;
		return (true);
	}
	return (false);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!isMateriasSourceFull())
		materias[size++] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < size; i++)
	{
		if (materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (0);
}


MateriaSource::~MateriaSource()
{
	//std::cout << "MaterialSource Destructor called\n";
	for (int i = 0; i < size;i++)
		delete materias[i];
}
