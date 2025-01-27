#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	std::srand(std::time(NULL));
	Base* ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}
