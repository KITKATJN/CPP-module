#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure( void );
	Cure( Cure const &cure );
	Cure &operator=( Cure const &cure );
	~Cure();

	std::string const & getType() const; //Returns the materia type
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif
