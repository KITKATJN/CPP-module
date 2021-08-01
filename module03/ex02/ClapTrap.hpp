#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitpoints;
	int energypoints;
	int attackDamage;
public:
	ClapTrap( std::string name );
	ClapTrap( void );
	ClapTrap( const ClapTrap &clap );
	ClapTrap& operator= ( const ClapTrap &clap );
	~ClapTrap();

	virtual void attack( std::string const & target );
	virtual void takeDamage( unsigned int amount );
	virtual void beRepaired( unsigned int amount );

};

#endif
