/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:48:23 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/07 19:26:21 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//constructure
Zombie::Zombie( void )
{
	
}

Zombie::Zombie( std::string name)
{
	this->name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName( void )
{
	return (this->name);
}


void	Zombie::setName( std::string name)
{
	this->name = name;
}


Zombie::~Zombie( void )
{
	std::cout << "destroy zombie : " << this ->name << std::endl;
}

Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies = NULL;
	if (N > 0)
	{
		zombies = new Zombie[N]();
		for (int i = 0; i < N; i++)
			zombies[i].setName(name);	
	}
	return (zombies);
}
