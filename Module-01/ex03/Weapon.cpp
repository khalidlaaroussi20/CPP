#include "Weapon.hpp"

Weapon::Weapon()
{
	this ->type = "";
	std::cout << "Weapon Constructure !!" << std::endl;
}

Weapon::Weapon( std::string type )
{
	this ->type = type;
}

const std::string &Weapon::getType( void )
{
	return (this ->type);
}

void Weapon::setType( std::string type )
{
	this ->type = type;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon Destructor !!" << std::endl;
}