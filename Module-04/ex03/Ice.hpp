/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:55:56 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 16:04:29 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice (const Ice &other);
		
		// Operators 
		Ice& operator= (const Ice& other);
		
		std::string const & 	getType() const; //Returns the materia type
		AMateria* 				clone() const;
		void 					use(ICharacter& target);

		~Ice();
};

#endif