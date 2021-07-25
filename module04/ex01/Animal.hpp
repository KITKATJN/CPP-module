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
	virtual ~Animal();
	Animal( const Animal &animal );
	Animal& operator= ( const Animal &animal );

	void makeSound() const;
	std::string getType() const;
};

#endif
