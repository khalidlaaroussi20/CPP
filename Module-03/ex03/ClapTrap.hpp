/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:39:39 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 15:36:32 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define DEFAULT_CLAP_HIT 10
# define DEFAULT_CLAP_ENERGY 10
# define DEFAULT_CLAP_ATTACK_DAMAGE 0

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string 	name;
		int	hit;
		unsigned int	energy;
		unsigned int	attackDamage;
		ClapTrap();
	public:
		ClapTrap(std::string 	name);
		ClapTrap (const ClapTrap &other);
		
		// Operators 
		ClapTrap& operator= (const ClapTrap& other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isAlive();

		~ClapTrap();
};

#endif