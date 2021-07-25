#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog( void );
	Dog( std::string &type );
	~Dog();
	Dog( const Dog &animal );
	Dog& operator= ( const Dog &animal );

	void makeSound();
	std::string getType() const;
};

Dog& Dog::operator= ( const Dog &animal ){
	type = animal.type;
	return *this;
}


Dog::Dog( const Dog &animal ):Animal("Dog")
{
	std::cout << "Copy constructor worked here!\n";
}

#endif
