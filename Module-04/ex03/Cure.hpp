/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:55:56 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 16:04:21 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure (const Cure &other);
		
		// Operators 
		Cure& operator= (const Cure& other);
		
		std::string const & getType() const; //Returns the materia type
		AMateria*			clone() const;
		void 				use(ICharacter& target);
		
		~Cure();
};

#endif