#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	int hitpoints_frag;
	int energypoints_frag;
	int attackDamage_frag;
public:
	FragTrap( std::string name );
	FragTrap( void );
	~FragTrap();
	FragTrap( const FragTrap &frag );
	FragTrap& operator= ( const FragTrap &clap );

	void highFivesGuys( void );
};

#endif
