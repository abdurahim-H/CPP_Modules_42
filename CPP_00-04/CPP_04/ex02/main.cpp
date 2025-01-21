#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n--- Creating array of Animal* ---" << std::endl;
	const int arraySize = 6;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize/2; ++i) {
		animals[i] = new Dog;
	}
	for (int i = arraySize / 2; i < arraySize; ++i) {
		animals[i] = new Cat();
	}

	std::cout << "\n--- Making sounds from the array ---" << std::endl;
	for (int i = 0; i < arraySize; ++i) {
		animals[i]->makeSound();
	}
	std::cout << "\n--- Deleting array of Animal* ---" << std::endl;
	for (int i = 0; i < arraySize; ++i) {
		delete animals[i];
	}

	std::cout << "\n--- Demonstrating deep copy on a Dog ---" << std::endl;

	Dog basicDog;
	{
		Dog tmpDog = basicDog;
		std::cout << "Exiting inner scope, tmpDog will be destroyed." << std::endl;
	}

	std::cout << "\n--- End of main ---" << std::endl;
	return 0;
}
