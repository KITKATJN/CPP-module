#include "Zombie.hpp"

int main()
{
	Zombie zomb("Alex");
	Zombie *zomb_2 = newZombie("Mary");

	zomb.announce();
	zomb.~Zombie();
	zomb_2->announce();
	randomChump("John");
	delete zomb_2;
}
