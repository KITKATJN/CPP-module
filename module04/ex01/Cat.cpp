#include "Cat.hpp"

// void Cat::makeSound(){
// 	std::cout << "meow" << std::endl;
// }

std::string Cat::getType() const{
	return Animal::type;
}

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
	delete brain;
}

Cat& Cat::operator= ( const Cat &animal ){
	type = animal.type;
	return *this;
}


Cat::Cat( const Cat &animal ):Animal("Cat")
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
	std::cout << "Copy constructor worked here!\n";
}
