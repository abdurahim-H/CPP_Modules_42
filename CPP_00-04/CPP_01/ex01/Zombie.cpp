#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed Zombie") {}

Zombie::Zombie(const std::string& name) : name(name) {}

Zombie::~Zombie() {
	std::cout <<  name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) {
	this->name = name;
}

