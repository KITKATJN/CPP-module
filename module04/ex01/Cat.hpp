#ifndef __Cat_HPP__
#define __Cat_HPP__

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat( void );
	~Cat();
	Cat( const Cat &animal );
	Cat& operator= ( const Cat &animal );

	//void makeSound();
	std::string getType() const;
};

#endif
