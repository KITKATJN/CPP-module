#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << Zombie::name << " died" << std::endl;
}

Zombie::Zombie( std::string name )
{
	Zombie::name = name;
}

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
