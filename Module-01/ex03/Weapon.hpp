/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 13:59:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef WEAPON_HPP
#define  WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Weapon
{
	private:
		std::string type;
		Weapon( void );
	
	public:
		Weapon( std::string type );
		~Weapon( void );
		
		//getters
		const std::string &getType( void );
		
		//setters
		void	setType( std::string type);
};

#endif