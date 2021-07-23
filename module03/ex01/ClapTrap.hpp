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

	void attack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

};

#endif
