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
}

Animal::Animal():type("")
{
}

Animal::~Animal()
{
}
