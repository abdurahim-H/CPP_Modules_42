#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "=== Testing valid levels ===\n" << std::endl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << "\n=== Testing invalid level ===\n" << std::endl;
	harl.complain("BLAH");

	return 0;
}