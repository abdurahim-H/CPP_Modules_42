#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "----- Creating a FragTrap using the default constructor -----" << std::endl;
    FragTrap fragDefault;   // Default constructor

    std::cout << "\n----- Creating a FragTrap using the parameterized constructor -----" << std::endl;
    FragTrap fragNamed("Jim");   // Parameterized constructor

    std::cout << "\n----- Testing FragTrap copy constructor -----" << std::endl;
    FragTrap fragCopy(fragNamed); // Copy constructor

    std::cout << "\n----- Performing actions on fragDefault -----" << std::endl;
    fragDefault.attack("the air");
    fragDefault.takeDamage(20);
    fragDefault.beRepaired(10);
    fragDefault.highFivesGuys();

    std::cout << "\n----- Performing actions on fragNamed (Jim) -----" << std::endl;
    fragNamed.attack("an unfortunate enemy");
    fragNamed.takeDamage(50);
    fragNamed.beRepaired(25);
    fragNamed.highFivesGuys();

    std::cout << "\n----- End of main: destructors will be called in reverse order -----" << std::endl;
    return 0;
}
