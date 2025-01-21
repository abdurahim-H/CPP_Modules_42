#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor called." << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called." << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a generic sound." << std::endl;
}

std::string Animal::getType() const {
	return type;
}