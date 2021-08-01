#include "FragTrap.hpp"

FragTrap::FragTrap( const FragTrap &clap ):ClapTrap(clap.name)
{
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	std::cout << "FragTrap " << name << " copied" << std::endl;
}

FragTrap& FragTrap::operator= ( const FragTrap &clap )
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

FragTrap::FragTrap( void ):ClapTrap()
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

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << name << " give high fives";
	std::cout << std::endl;
}

void FragTrap::attack( std::string const & target ){
	this->energypoints--;
	std::cout << "FragTrap " << this->name << " attacks ";
	std::cout << target << ", causing " << attackDamage<< " points of damage!" << std::endl;
	std::cout << "Now energy is " << this->energypoints << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << "FragTrap " << this->name << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "FragTrap " << this->name << " repaired ";
	std::cout << amount << " points of hill!" << std::endl;
	std::cout << "Now hitpoints is " << this->hitpoints << std::endl;
}
