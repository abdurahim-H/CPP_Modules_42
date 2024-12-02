#include "Zombie.h"

void randomChump(const std::string& name) {
	Zombie zombie(name);
	zombie.announce();
}