#include "Zombie.hpp"

int main()
{
	Zombie *zombiehord = zombieHorde(8, "ALEX");
	delete[] zombiehord;
}
