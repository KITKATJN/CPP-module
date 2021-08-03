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
	DiamondTrap( void );
	~DiamondTrap();
	DiamondTrap( const DiamondTrap &frag );
	DiamondTrap& operator= ( const DiamondTrap &clap );
	void whoAmI( void );
	//void attack( std::string const & target );
};


#endif
