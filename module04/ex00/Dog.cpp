#include "Dog.hpp"

void Dog::makeSound(){
	std::cout << "woof" << std::endl;
}

std::string Dog::getType() const{
	return Animal::type;
}

Dog::Dog( std::string &type ):Animal(type)
{
}

Dog::Dog():Animal("Dog")
{
}

Dog::~Dog()
{
}

