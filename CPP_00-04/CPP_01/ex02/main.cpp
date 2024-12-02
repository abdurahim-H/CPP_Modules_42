#include <iostream>
#include <string>

int main()
{
	std::string jstString = "HI THIS IS BRAIN";
	std::string* stringPTR = &jstString;
	std::string& stringREF = jstString;

	std::cout << "Memory address of the string variable: " << &jstString << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << jstString << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value referred to by stringREF: " << stringREF << std::endl;

	return (0);
}