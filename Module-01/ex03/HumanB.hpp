/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 14:35:23 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef HUMANB_HPP
#define  HUMANB_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"



class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
		HumanB( void );
	
	public:
		HumanB( std::string	name );
		HumanB( std::string	name , Weapon		&weapon);
		~HumanB( void );
		
		//getters
		Weapon	&getWeapon( void );
		
		//setters
		void	setWeapon(Weapon	&weapon);

		void	attack( void );
};

#endif