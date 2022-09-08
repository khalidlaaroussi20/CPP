/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/07 19:03:35 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef ZOMBIE_HPP
#define  ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie( void );
		Zombie( std::string name );
		void	announce( void );
		~Zombie( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif