#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();
	void attack( void );
};

#endif
