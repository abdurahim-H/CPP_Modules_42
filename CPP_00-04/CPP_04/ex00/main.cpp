#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "----- Creating Animal, Dog, Cat objects dynamically -----" << std::endl;
    const Animal* genericAnimal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\n----- Checking their types and sounds -----" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    dog->makeSound();   // Should print the dog sound
    cat->makeSound();   // Should print the cat sound
    genericAnimal->makeSound(); // Generic animal sound

    std::cout << "\n----- Deleting all dynamic objects -----" << std::endl;
    delete genericAnimal; // Animal destructor
    delete dog;           // Dog destructor, then Animal destructor
    delete cat;           // Cat destructor, then Animal destructor

    std::cout << "\n----- Creating and testing objects on the stack -----" << std::endl;
    {
        Dog stackDog;
        Cat stackCat;

        std::cout << "Stack dog type: " << stackDog.getType() << std::endl;
        std::cout << "Stack cat type: " << stackCat.getType() << std::endl;
        stackDog.makeSound();
        stackCat.makeSound();
    } // stackDog and stackCat go out of scope here, so destructors are called

    std::cout << "\n----- End of main -----" << std::endl;
    return 0;
}
