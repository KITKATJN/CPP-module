#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap( std::string name );
	FragTrap( void );
	virtual ~FragTrap();
	FragTrap( const FragTrap &frag );
	FragTrap& operator= ( const FragTrap &clap );

	void highFivesGuys( void );
	virtual void attack( std::string const & target );
	virtual void takeDamage( unsigned int amount );
	virtual void beRepaired( unsigned int amount );
};

#endif
