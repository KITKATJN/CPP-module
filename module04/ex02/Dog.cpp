#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}

std::string Dog::getType() const{
	return Animal::type;
}

Dog::Dog( std::string &type ):Animal(type)
{
	std::cout << "Dog created" << std::endl;
	brain = new Brain();
}

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	delete brain;
}

Dog& Dog::operator= ( const Dog &animal ){
	type = animal.type;
	return *this;
}


Dog::Dog( const Dog &animal ):Animal("Dog")
{
	if (animal.brain)
	{
		brain = new Brain;
		for (int i = 0; i < 100; i++){
			brain->ideas[i] = animal.brain->ideas[i];
		}
	}
	else
		brain = 0;
	std::cout << "first brain = " << animal.brain << " second brain = ";
	std::cout << brain << std::endl;
	std::cout << "Copy constructor worked here!" << std::endl;
}
