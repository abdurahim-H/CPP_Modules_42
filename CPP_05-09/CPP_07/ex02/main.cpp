#include "Array.hpp"
#include <iostream>
#include <string>

// Helper function to print array contents
template<typename T>
void printArray(const Array<T>& arr, const std::string& name) {
	std::cout << name << ": [";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i];
		if (i < arr.size() - 1) std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

// Test class to verify destruction
class Test {
	public:
		~Test() { std::cout << "Test object destroyed\n"; }
};

int main() {
	std::cout << "===== Basic Functionality Tests =====" << std::endl;

	// Test 1: Default constructor (empty array)
	{
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;
	}

	// Test 2: Parameterized constructor with integers
	{
		Array<int> numbers(5);
		for (unsigned int i = 0; i < numbers.size(); i++)
			numbers[i] = i * 10;
		printArray(numbers, "Numbers array");
	}

	// Test 3: Parameterized constructor with strings
	{
		Array<std::string> words(3);
		words[0] = "hello";
		words[1] = "world";
		words[2] = "!";
		printArray(words, "Strings array");
	}

	std::cout << "\n===== Copy and Assignment Tests =====" << std::endl;

	// Test 4: Copy constructor
	{
		Array<int> original(3);
		original[0] = 10;
		original[1] = 20;
		original[2] = 30;

		Array<int> copy(original);
		copy[0] = 100; // Modify copy

		printArray(original, "Original array");
		printArray(copy, "Copied array (modified)");
	}

	// Test 5: Assignment operator
	{
		Array<int> source(2);
		source[0] = 42;
		source[1] = 24;

		Array<int> target;
		target = source;
		target[0] = 100; // Modify target

		printArray(source, "Source array");
		printArray(target, "Target array (modified)");
	}

	std::cout << "\n===== Exception Safety Tests =====" << std::endl;

	// Test 6: Out-of-bounds access
	try {
		Array<int> arr(3);
		std::cout << "Trying to access arr[5]: " << arr[5] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// Test 7: Const array access
	{
		const Array<int> const_arr(2);
		try {
			std::cout << "Const array access: " << const_arr[0] << std::endl;
		} catch (const std::exception& e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << "\n===== Edge Case Tests =====" << std::endl;

	// Test 8: Zero-size array
	{
		Array<double> empty(0);
		std::cout << "Zero-size array size: " << empty.size() << std::endl;
		try {
			empty[0] = 3.14;
		} catch (const std::exception& e) {
			std::cout << "Zero-size access error: " << e.what() << std::endl;
		}
	}

	// Test 9: Self-assignment
	{
		Array<char> letters(3);
		letters[0] = 'A';
		letters[1] = 'B';
		letters[2] = 'C';
		
		letters = letters; // Self-assignment
		printArray(letters, "After self-assignment");
	}

	// Test 10: Memory management verification
	std::cout << "\n===== Memory Management Test =====" << std::endl;
	{
		Array<Test> testArray(3);
		std::cout << "Test array created, should see 3 destructions:" << std::endl;
	}

	return 0;
}