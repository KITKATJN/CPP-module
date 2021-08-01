#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Alex");

	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.attack("Lucy");
	// diamond.takeDamage(90);
	// diamond.beRepaired(80);
	// DiamondTrap Mary(diamond);
	// Mary.attack("Sam");
	// Mary.beRepaired(10);
	// diamond = Mary;
	// diamond.takeDamage(10);
	// diamond.attack("Roy");
	return 0;
}
