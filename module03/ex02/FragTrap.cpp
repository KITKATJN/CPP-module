#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap &clap):ClapTrap(clap.name)
{
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	std::cout << "ScavTrap " << name << " copied" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &clap)
{
	name = clap.name;
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	return *this;
}

FragTrap::FragTrap( std::string name ):ClapTrap(name)
{
	ClapTrap::hitpoints = 100;
	ClapTrap::energypoints = 100;
	ClapTrap::attackDamage = 30;
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroy" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " give high fives";
	std::cout << std::endl;
}
