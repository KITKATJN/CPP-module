#include "ScavTrap.hpp"

ScavTrap& ScavTrap::operator= (const ScavTrap &clap)
{
	name = clap.name;
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	return *this;
}

ScavTrap::ScavTrap( std::string name ):ClapTrap(name)
{
	ClapTrap::hitpoints = 100;
	ClapTrap::energypoints = 50;
	ClapTrap::attackDamage = 20;
	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clap):ClapTrap(clap.name)
{
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	std::cout << "ScavTrap " << name << " copied" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destroy" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << name << "  have enterred in Gate keeper mode";
	std::cout << std::endl;
}
