#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:

public:
	ScavTrap( std::string name );
	ScavTrap( void );
	ScavTrap( const ScavTrap &scav );
	ScavTrap& operator= ( const ScavTrap &clap );
	~ScavTrap();

	void guardGate( void );
	void attack( std::string const & target );
};

#endif
