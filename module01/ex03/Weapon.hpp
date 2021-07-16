#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon( void );
	Weapon(std::string const &type);
	~Weapon();
	std::string const &getType( void ) const;
	void setType( std::string const &type  );
};

#endif
