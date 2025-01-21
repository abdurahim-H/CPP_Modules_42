#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called." << std::endl;
    this->type = other.type;
	brain = new Brain(*(other.brain));
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		brain = new Brain(*(other.brain));
	}
	return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called for " << type << std::endl;
	delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
