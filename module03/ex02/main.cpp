#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("Alex");
	FragTrap frag("Jonh");

	frag.highFivesGuys();
	frag.takeDamage(10);
	frag.~FragTrap();
	FragTrap tg("Mike");
	tg.beRepaired(10);
	FragTrap yy(tg);
	yy.attack("From north!");
	yy.highFivesGuys();
	yy.takeDamage(50);
	tg = yy;
	yy.beRepaired(10);
	tg.beRepaired(20);
	return 0;
}
