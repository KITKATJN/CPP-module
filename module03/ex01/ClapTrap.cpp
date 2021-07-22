#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ):name(name), hitpoints(10), energypoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap):name(clap.name)
{
	std::cout << "ClapTrap " << name << " copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << "  destroy" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &clap)
{
	name = clap.name;
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	this->energypoints--;
	std::cout << "ClapTrap " << this->name << " attacks ";
	std::cout << target << ", causing " << attackDamage<< " points of damage!" << std::endl;
	std::cout << "Now energy is " << this->energypoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired ";
	std::cout << amount << " points of hill!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}
