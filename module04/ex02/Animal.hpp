#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
	Animal( void );
	Animal( std::string type );
private:
	/* data */
public:
	virtual ~Animal();
	Animal( const Animal &animal );
	Animal& operator= ( const Animal &animal );

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
