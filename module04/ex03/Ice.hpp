#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice( void );
	Ice( Ice const &Ice );
	Ice &operator=( Ice const &Ice );
	~Ice();

	std::string const & getType() const; //Returns the materia type
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
