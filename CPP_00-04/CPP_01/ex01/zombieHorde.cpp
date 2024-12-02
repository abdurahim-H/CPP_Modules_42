#include "Zombie.h"
#include <new>
#include <cstdlib>

Zombie* zombieHorde(int N, const std::string& name) {
	if (N <= 0)
		return (nullptr);
	
	// Zombie* zombies = static_cast<Zombie*>(operator new[](N* sizeof(Zombie)));

	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		zombies[i].setName(name);
	}

	return (zombies);
}