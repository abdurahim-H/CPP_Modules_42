#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = "DefaultScav";
}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout << "ScavTrap name constructor called for: " << name << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap destructor called for: " << _name << std::endl;

}

void ScavTrap::attack(const std::string &target) {
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " slashes " << target 
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << _name << " cannot attack due to insufficient hit points or energy." << std::endl;
}

void  ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}