#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
private:
	//

public:
	Cat();
	Cat(const Cat &other);
	~Cat();

	void makeSound() const;
};

#endif
