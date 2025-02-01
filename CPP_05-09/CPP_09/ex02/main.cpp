#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <ctime>

void sortVector(std::vector<int>& vec);
void sortDeque(std::deque<int>& deq);

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
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

	clock_t startVector = clock();
	sortVector(numbers);
	clock_t endVector = clock();
	double elapsedVector = (double)(endVector - startVector) * 1e6 / CLOCKS_PER_SEC;

	clock_t startDeque = clock();
	sortDeque(numbersDeque);
	clock_t endDeque = clock();
	double elapsedDeque = (double)(endDeque - startDeque) * 1e6 / CLOCKS_PER_SEC;

	std::cout << "After: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }

	std::cout << std::endl;

	std::cout << "Time to process a range of " << numbers.size()
		<< " elements with std::vector : " << elapsedVector << " us" << std::endl;
	std::cout << "Time to process a range of " << numbersDeque.size()
		<< " elements with std::deque : " << elapsedDeque << " us" << std::endl;


	return 0;
}
