#include "Cat.hpp"

void Cat::makeSound(){
	std::cout << "meow" << std::endl;
}

std::string Cat::getType() const{
	return Animal::type;
}

Cat::Cat():Animal("Cat")
{
}

Cat::~Cat()
{
}
