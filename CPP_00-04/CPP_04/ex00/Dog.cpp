#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other) :Animal(other) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = other.type;
}

Dog::~Dog() {
	std::cout << "Dog destructor called for " << type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}