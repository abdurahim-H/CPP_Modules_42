#include "Zombie.h"

int main()
{
	Zombie z("Foo");
	z.announce();
	
	Zombie* heapZombie = newZombie("Heapie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stacky");

	return (0);
}