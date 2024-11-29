#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	std::string	result;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			result += argv[i];
			// if (i < argc - 1)
			// 	result += " ";
		}
		for (char &c : result)
			c = std::toupper(static_cast<unsigned char>(c));
		std::cout << result << std::endl;
	}
}
