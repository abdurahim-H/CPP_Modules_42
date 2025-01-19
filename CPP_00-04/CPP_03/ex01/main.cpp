#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "----- Creating ScavTrap using default constructor -----" << std::endl;
    ScavTrap scavDefault;  // Calls default constructor

    std::cout << "\n----- Creating ScavTrap using parameterized constructor -----" << std::endl;
    ScavTrap scavNamed("Bob");

    std::cout << "\n----- Testing ScavTrap copy constructor -----" << std::endl;
    ScavTrap scavCopy(scavNamed);

    std::cout << "\n----- Performing some actions on scavDefault -----" << std::endl;
    scavDefault.attack("target_dummy");
    scavDefault.takeDamage(20);
    scavDefault.beRepaired(10);
    scavDefault.guardGate();

    std::cout << "\n----- Performing some actions on scavNamed (Bob) -----" << std::endl;
    scavNamed.attack("another_dummy");
    scavNamed.takeDamage(60);
    scavNamed.beRepaired(15);
    scavNamed.guardGate();

    std::cout << "\n----- End of main, destructors will be called in reverse order -----" << std::endl;
    return 0;
}
