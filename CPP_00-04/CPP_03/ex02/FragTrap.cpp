#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_name = "DefaultFrag";
}

FragTrap::FragTrap(const std::string &name) {
	std::cout << "FragTrap name constructor called for: " << name << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for: " << _name << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name 
          << " says: \"High five, guys?\"" << std::endl;
}