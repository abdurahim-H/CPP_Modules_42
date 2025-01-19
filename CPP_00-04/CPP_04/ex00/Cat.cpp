#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called." << std::endl;
    this->type = other.type;
}

Cat::~Cat() {
    std::cout << "Cat destructor called for " << type << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
