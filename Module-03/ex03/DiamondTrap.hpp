/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.HPP                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:30:20 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 11:48:50 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	private :
		std::string	name;
		DiamondTrap();
	public :
		DiamondTrap(std::string 	name);
		DiamondTrap (const DiamondTrap &other);
		
		// Operators 
		DiamondTrap&	operator= (const DiamondTrap& other);

		
		void attack(const std::string& target);
		void whoAmI();

		~DiamondTrap();
};

#endif