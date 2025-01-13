#include "ClapTrap.hpp"

int main() {
    ClapTrap bob("Bob");
	ClapTrap bobCopy(bob);
    bob.attack("Enemy");
    bob.takeDamage(5);
    bob.beRepaired(3);
    bob.takeDamage(10);
    bob.attack("Enemy");
    bob.beRepaired(5);

    return 0;
}
