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
	virtual ~ScavTrap();

	void guardGate( void );
	virtual void attack( std::string const & target );
	virtual void takeDamage( unsigned int amount );
	virtual void beRepaired( unsigned int amount );
};

#endif
