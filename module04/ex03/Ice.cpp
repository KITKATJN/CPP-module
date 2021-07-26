#include "Ice.hpp"

std::string const & Ice::getType() const{
	return AMateria::type;
}

Ice::Ice( void ):AMateria("ice")
{
}

Ice::Ice( Ice const &ice ):AMateria("ice")
{
	this->type = ice.type;
}

Ice::~Ice()
{
}

Ice &Ice::operator=( Ice const &ice ){
	this->type = ice.type;
	return *this;
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}

void Ice::use(ICharacter& target){
	AMateria::use(target);
}
