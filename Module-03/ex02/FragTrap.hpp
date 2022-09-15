/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:20:51 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 16:00:26 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


# define DEFAULT_FRAG_HIT 100
# define DEFAULT_FRAG_ENERGY 100
# define DEFAULT_FRAG_ATTACK_DAMAGE 30

class FragTrap : public ClapTrap 
{
	private :
		FragTrap();
	public :
		FragTrap(std::string 	name);
		FragTrap (const FragTrap &other);
		
		// Operators 
		FragTrap&	operator= (const FragTrap& other);
		void		highFivesGuys(void);

		~FragTrap();
};