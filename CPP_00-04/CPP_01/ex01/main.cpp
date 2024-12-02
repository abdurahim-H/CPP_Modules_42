#include "Zombie.h"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " N ZombieName" << std::endl;
        return 1;
    }

    int N = std::atoi(argv[1]);
    std::string name = argv[2];

    if (N <= 0)
    {
        std::cout << "N must be a positive integer." << std::endl;
        return 1;
    }

    Zombie* horde = zombieHorde(N, name);

    if (!horde)
    {
        std::cout << "Failed to create horde." << std::endl;
        return 1;
    }

    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }

    // for (int i = 0; i < N; ++i)
    // {
    //     horde[i].~Zombie();
    // }

    // operator delete[](horde);
	
	delete[] horde;

    return 0;
}
