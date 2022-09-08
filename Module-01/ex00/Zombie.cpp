/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:48:23 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/07 19:04:32 by klaarous         ###   ########.fr       */
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