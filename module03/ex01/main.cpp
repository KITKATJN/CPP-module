#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Alex");
	ScavTrap scav("Jonh");

	scav.guardGate();
	scav.attack("Andrey");
	scav.takeDamage(10);
	ScavTrap scav_copy(scav);
	scav.~ScavTrap();
	scav_copy.takeDamage(40);
	scav_copy.beRepaired(30);
	ScavTrap scav_copy2("Mike");
	scav_copy2 = scav_copy;
	scav_copy2.takeDamage(5);
	return 0;
}
