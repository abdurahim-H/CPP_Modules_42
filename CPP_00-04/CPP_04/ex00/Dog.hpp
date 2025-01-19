#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	private:
		//

	public:
		Dog();
		Dog(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif