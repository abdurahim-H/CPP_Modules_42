#include "Zombie.h"

int main()
{
	Zombie* heapZombie = newZombie("Heapie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stacky");

	return (0);
}