#include "AMateria.hpp"

std::string const & AMateria::getType() const{
	return type;
}

AMateria::~AMateria(){
}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria(){

}

void AMateria::use(ICharacter& target){
	if (type == "ice"){
		std::cout << "* shoots an ice bolt at " << target.getName() << " *";
		std::cout << std::endl;
	}
	else if (type == "cure"){
		std::cout << "* heals " << target.getName() << "'s  wounds *";
		std::cout << std::endl;
	}
}
