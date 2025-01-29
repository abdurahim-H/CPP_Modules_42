#include <iostream>
#include "iter.hpp"

template <typename T>
void printElement(const T &element) {
	std::cout << element << std::endl;
}

int main() {
	std::cout << "=== Testing iter ===" << std::endl;

	int intArray[] = {10, 20, 30, 40, 50};
	size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
	std::cout << "Integers:\n";
	iter(intArray, intSize, printElement<int>);

	std::string strArray[] = {"Hello", "World", "42", "School"};
	size_t strSize = sizeof(strArray) / sizeof(strArray[0]);
	std::cout << "Strings:\n";
	iter(strArray, strSize, printElement<std::string>);

	return 0;
}
