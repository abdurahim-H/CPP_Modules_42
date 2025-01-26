#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cerr << "Usage: ./convert <scalar_literal>" << std::endl;
		return 1;
	}
	std::string literal = argv[1];
	try {
		ScalarConverter::convert(literal);
	} catch (const std::exception& e) {
		std::cerr << "Error during conversion: " << e.what() << std::endl;
	}

	return 0;
}
