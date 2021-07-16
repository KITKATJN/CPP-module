#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon):name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack( void ) {
	std::cout << HumanA::name << " attacks with his " << HumanA::weapon.getType() << std::endl;
}
