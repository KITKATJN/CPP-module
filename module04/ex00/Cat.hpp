#ifndef __Cat_HPP__
#define __Cat_HPP__

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat( void );
	~Cat();
	Cat( const Cat &animal );
	Cat& operator= ( const Cat &animal );

	void makeSound();
	std::string getType() const;
};

Cat& Cat::operator= ( const Cat &animal ){
	type = animal.type;
	return *this;
}


Cat::Cat( const Cat &animal ):Animal("Cat")
{
	std::cout << "Copy constructor worked here!\n";
}

#endif
