#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	int fill;
	AMateria *materia[4];
public:
	Character( void );
	Character( std::string const &name );
	Character ( Character const &character );
	~Character();
	Character &operator= ( Character const &character );

	std::string const &getName( void ) const;
	void equip( AMateria *m) ;
	void unequip( int idx );
	void use( int idx, ICharacter &target );
};

#endif
