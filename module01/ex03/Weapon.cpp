#include "Weapon.hpp"

void	Weapon::setType( std::string const &type ){
	Weapon::type = type;
}

std::string const &Weapon::getType( void ) const{
	return Weapon::type;
}

Weapon::Weapon(std::string const &type):type(type){}

Weapon::Weapon(){}

Weapon::~Weapon()
{
}

