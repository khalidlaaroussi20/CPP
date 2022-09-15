/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:22:30 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 11:47:56 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# define SIZE_INVENTORY 4



#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected :
		std::string name;
		AMateria *inventory[SIZE_INVENTORY];
		int 	 size;
	public :
		Character();
		Character(std::string name);
		Character (const Character &other);
		
		// Operators 
		Character& operator= (const Character& other);

		//getters
		std::string const & getName() const;

		//methods
		void	initInventory();
		unsigned int getIdxFreeInventorySlot();
		bool	isInventoryFull() const;
		bool	isMateriaExist(int idx) const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		

		~Character();
			
};

#endif