#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Alex");

	clap.attack("Nick");
	clap.takeDamage(5);
	clap.beRepaired(3);
	return 0;
}
