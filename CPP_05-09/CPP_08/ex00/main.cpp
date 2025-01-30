#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "easyfind.hpp"
#include <list>

int main()
{
	std::vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(40);
	numbers.push_back(30);
	
	std::list<int> listNumbers;
	listNumbers.push_back(5);
	listNumbers.push_back(15);
	listNumbers.push_back(25);


	// Test case 1:
	try {
		std::vector<int>::iterator it = easyfind(numbers, 30);
		std::cout << "Found: " << *it << std::endl;
	} catch (const std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	
	// Test case 2
	try {
		std::vector<int>::iterator it = easyfind(numbers, 600);
		std::cout << "Found: " << *it << std::endl;
	} catch (const std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}

	// Test case 3 (bonus)
	try {
		std::list<int>::iterator listIt = easyfind(listNumbers, 15);
		std::cout << "Found in list: " << *listIt << std::endl;
	} catch(const std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}