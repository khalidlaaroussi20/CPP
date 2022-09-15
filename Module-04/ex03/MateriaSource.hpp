/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:24:16 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 16:52:07 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# define SIZE_MATERIAS_SOURCE 4


#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


class MateriaSource : public IMateriaSource
{
	private :
		AMateria	*materias[SIZE_MATERIAS_SOURCE];
		int			size;
	public :
		MateriaSource();
		MateriaSource (const MateriaSource &other);
		
		// Operators 
		MateriaSource& operator= (const MateriaSource& other);

		//methods
		bool		isMateriasSourceFull() const;
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
		
		
		~MateriaSource();
};

#endif