#include "Cure.hpp"

std::string const & Cure::getType() const{
	return AMateria::type;
}

Cure::Cure( void ):AMateria("cure")
{
}

Cure::Cure( Cure const &cure ):AMateria("cure")
{
	this->type = cure.type;
}

Cure::~Cure()
{
}

Cure &Cure::operator=( Cure const &cure ){
	this->type = cure.type;
	return *this;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	AMateria::use(target);
}
