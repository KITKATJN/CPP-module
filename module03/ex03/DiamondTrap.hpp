#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;
public:
	DiamondTrap( std::string name );
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &frag);
	DiamondTrap& operator= (const DiamondTrap &clap);
	void whoAmI( void );
};


#endif
