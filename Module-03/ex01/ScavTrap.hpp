/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:20:51 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 15:48:41 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


# define DEFAULT_SCAV_HIT 100
# define DEFAULT_SCAV_ENERGY 50
# define DEFAULT_SCAV_ATTACK_DAMAGE 10

class ScavTrap : public ClapTrap 
{
	private :
		ScavTrap();
	public :
		ScavTrap(std::string 	name);
		ScavTrap (const ScavTrap &other);
		
		// Operators 
		ScavTrap&	operator= (const ScavTrap& other);
		void		guardGate();

		~ScavTrap();
};