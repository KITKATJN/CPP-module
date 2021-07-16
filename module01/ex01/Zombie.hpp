#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie{
public:
	void	announce( void );
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );
	Zombie*	newZombie( std::string name );
	void set_name( std::string name );

private:
	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );
#endif
