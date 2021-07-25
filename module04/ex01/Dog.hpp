#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog( void );
	Dog( std::string &type );
	~Dog();
	Dog( const Dog &animal );
	Dog& operator= ( const Dog &animal );

	void makeSound() const ;
	std::string getType() const ;
};

#endif
