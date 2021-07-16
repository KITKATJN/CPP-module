#include "HumanB.hpp"

HumanB::HumanB( std::string const &name ):name(name){
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon){
	HumanB::weapon = &weapon;
}

void HumanB::attack( void ){
	std::cout << HumanB::name << " attacks with his " << HumanB::weapon->getType();
	std::cout << std::endl;
}
