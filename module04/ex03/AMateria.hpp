#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
