#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other) :Animal(other) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = other.type;
	brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called for " << type << std::endl;
	delete brain;
}


void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}