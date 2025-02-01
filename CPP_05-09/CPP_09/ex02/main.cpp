#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>
#include <deque>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "incorrect input; expected:\n"
				  << argv[0] << " ..." << std::endl;
		return 1;
	}

	std::vector<int> numbers;
	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		for (size_t j = 0; j < arg.size(); ++j) {
			if (!std::isdigit(arg[j])) {
				std::cerr << "Error: invalid argument \"" << arg 
						  << "\". Only positive integers are allowed." 
						  << std::endl;
				return 1;
			}
		}
		int num = std::atoi(arg.c_str());
		if (num <= 0) {
			std::cerr << "Error: invalid argument \"" << arg 
					  << "\". Only positive integers are allowed." 
					  << std::endl;
			return 1;
		}
		numbers.push_back(num);
	}

	std::deque<int> numbersDeque(numbers.begin(), numbers.end());

	std::cout << "Before: ";
	for (size_t k = 0; k < numbers.size(); ++k) {
		std::cout << numbers[k] << " ";
	}

	std::cout << "\nBefore (deque): ";
	for (std::deque<int>::iterator it = numbersDeque.begin(); it != numbersDeque.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}
