#include <iostream>
#include <vector>
#include <cstdlib> // For rand()
#include "Span.hpp"

int main() {
	std::cout << "===== TEST CASE 1: Basic Functionality =====" << std::endl;
	try {
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== TEST CASE 2: Edge Cases =====" << std::endl;
	try {
		// Test adding to a full Span
		Span sp(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		// Test span calculation with 1 element
		Span sp(1);
		sp.addNumber(42);
		sp.shortestSpan();
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try {
		// Test exact capacity
		Span sp(2);
		sp.addNumber(-5);
		sp.addNumber(10);
		std::cout << "Shortest span (2 elements): " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span (2 elements): " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== TEST CASE 3: Iterator addNumbers =====" << std::endl;
	try {
		Span sp(10);
		std::vector<int> numbers;
		numbers.push_back(0);
		numbers.push_back(5);
		numbers.push_back(10);
		numbers.push_back(15);
		numbers.push_back(20);

		sp.addNumbers(numbers.begin(), numbers.end());
		std::cout << "Shortest span after iterator add: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span after iterator add: " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== TEST CASE 4: 10,000 Numbers =====" << std::endl;
	try {
		Span sp(10000);
		std::vector<int> bigVector;
		for (int i = 0; i < 10000; ++i) {
			bigVector.push_back(i * 2);
		}
		
		sp.addNumbers(bigVector.begin(), bigVector.end());
		std::cout << "Shortest span (10k numbers): " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span (10k numbers): " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}