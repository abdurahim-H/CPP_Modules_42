#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = "Default";
}

ClapTrap::ClapTrap(const std::string &name) {
	std::cout << "ClapTrap name constructor called for: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for: " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
			_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot attack due to insufficient hit points or energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount
		<< " points of damage! Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount
			<< " points! Total HP: " << _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot repair due to insufficient hit points or energy." << std::endl;
}