#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
private:
	/* data */
public:
	Animal( void );
	Animal( std::string type );
	~Animal();
	Animal( const Animal &animal );
	Animal& operator= ( const Animal &animal );

	void makeSound() const;
	std::string getType() const;
};

Animal& Animal::operator= ( const Animal &animal ){
	type = animal.type;
	return *this;
}


Animal::Animal( const Animal &animal ):type(animal.type)
{
	std::cout << "Copy constructor worked here!\n";
}

#endif
