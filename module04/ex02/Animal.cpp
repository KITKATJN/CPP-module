#include "Animal.hpp"

void Animal::makeSound() const {
	if (type == "Cat")
		std::cout << "meow" << std::endl;
	else if (type == "Dog")
		std::cout << "woof" << std::endl;
	else
		std::cout << "empty type" << std::endl;
}

std::string Animal::getType() const{
	return Animal::type;
}

Animal::Animal( std::string type ):type(type)
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal():type("")
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal& Animal::operator= ( const Animal &animal ){
	type = animal.type;
	return *this;
}


Animal::Animal( const Animal &animal ):type(animal.type)
{
	std::cout << "Copy constructor worked here!\n";
}
