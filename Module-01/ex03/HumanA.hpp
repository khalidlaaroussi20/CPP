/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 14:30:24 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef HUMANA_HPP
#define  HUMANA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"


class HumanA
{
	private:
		std::string name;
		Weapon		&weapon;
		HumanA( void );
	
	public:
		HumanA( std::string name,  Weapon	&w);
		~HumanA( void );
		
		//getters
		Weapon	&getWeapon( void );
		
		//setters
		void	setWeapon(Weapon	&weapon);

		void	attack( void );
};

#endif