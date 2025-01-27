#include "A.hpp"  
#include "B.hpp"  
#include "C.hpp"  
// #include <cstdlib>
#include <iostream>

Base* generate(void) {
	int choice = rand() % 3;

	if (choice == 0)
		return new A;
	if (choice == 1)
		return new B;
	else
		return new C;
}
