#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string.h>


class ICharacter;


class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria (const AMateria &other);
		
		// Operators 
		AMateria& operator= (const AMateria& other);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual ~AMateria();
		virtual void use(ICharacter& target);
};

#endif