#include "ScavTrap.hpp"

ScavTrap& ScavTrap::operator= ( const ScavTrap &clap )
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

ScavTrap::ScavTrap( void ):ClapTrap()
{
	ClapTrap::hitpoints = 100;
	ClapTrap::energypoints = 50;
	ClapTrap::attackDamage = 20;
	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &clap ):ClapTrap(clap.name)
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

void ScavTrap::attack( std::string const & target ){
	this->energypoints--;
	std::cout << "ScavTrap " << this->name << " attacks ";
	std::cout << target << ", causing " << attackDamage<< " points of damage!" << std::endl;
	std::cout << "Now energy is " << this->energypoints << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << "ScavTrap " << this->name << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "ScavTrap " << this->name << " repaired ";
	std::cout << amount << " points of hill!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}
