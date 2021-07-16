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

Zombie::Zombie( void ):name(std::string())
{
}

void Zombie::set_name( std::string name ){
	Zombie::name = name;
}

Zombie* Zombie::newZombie( std::string name )
{
	return new Zombie(name);
}
