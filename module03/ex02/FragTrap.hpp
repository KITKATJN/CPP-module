#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &frag);
	FragTrap& operator= (const FragTrap &clap);

	void highFivesGuys(void);
};

#endif
