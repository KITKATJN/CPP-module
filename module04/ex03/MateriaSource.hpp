#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int number;
	AMateria *materia[4];
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const &materia );
	~MateriaSource();
	MateriaSource &operator=( MateriaSource const &materia );

	void learnMateria( AMateria *materia );
	AMateria* createMateria( std::string const & type );
};


#endif
