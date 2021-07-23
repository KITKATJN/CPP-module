#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const DiamondTrap &clap ):
	ClapTrap(clap.name + "_clap_name"),
	FragTrap(clap.name + "_clap_name"),
	ScavTrap(clap.name + "_clap_name")
{
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	hitpoints_frag = clap.hitpoints;
	attackDamage_frag = clap.attackDamage;
	energypoints_frag = clap.energypoints;
	std::cout << "DiamondTrap " << name << " copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator= ( const DiamondTrap &clap )
{
	name = clap.name;
	hitpoints = clap.hitpoints;
	attackDamage = clap.attackDamage;
	energypoints = clap.energypoints;
	hitpoints_frag = clap.hitpoints;
	attackDamage_frag = clap.attackDamage;
	energypoints_frag = clap.energypoints;
	return *this;
}

DiamondTrap::DiamondTrap( std::string name ):ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name = name;
	this->hitpoints = FragTrap::hitpoints_frag;
	this->attackDamage = FragTrap::attackDamage_frag;
	// std::cout << "DiamondTrap hitpoints = " << DiamondTrap::hitpoints << std::endl;
	// std::cout << "DiamondTrap energypoints = " << DiamondTrap::energypoints << std::endl;
	// std::cout << "DiamondTrap attack = " << DiamondTrap::attackDamage  << " *->"<< FragTrap::attackDamage << std::endl;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap( void ):ClapTrap("Alex_clap_name"), FragTrap("Alex_clap_name"), ScavTrap("Alex_clap_name")
{
	this->name = name;
	this->hitpoints = FragTrap::hitpoints_frag;
	this->attackDamage = FragTrap::attackDamage_frag;
	// std::cout << "DiamondTrap hitpoints = " << DiamondTrap::hitpoints << std::endl;
	// std::cout << "DiamondTrap energypoints = " << DiamondTrap::energypoints << std::endl;
	// std::cout << "DiamondTrap attack = " << DiamondTrap::attackDamage  << " *->"<< FragTrap::attackDamage << std::endl;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << this->name << " and ";
	std::cout << ScavTrap::name << std::endl;
}
