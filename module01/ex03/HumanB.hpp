#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;

public:
	HumanB( std::string const &name );
	~HumanB();
	void attack( void );
	void setWeapon( Weapon &weapon );
};


#endif
