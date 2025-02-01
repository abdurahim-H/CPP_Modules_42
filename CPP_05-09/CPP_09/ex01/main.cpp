#include <iostream>
#include <string>
#include <sstream>
#include <stack>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "incorrect input; expected:\n"
			<< argv[0] << " \"...\" " << std::endl;
		return 1;
	}

	std::string expression(argv[1]);
	std::istringstream iss(expression);
	std::string token;
	std::stack<int> num;
	while (iss >> token) {
		// std::cout << "Token: " << token << std::endl;
		if (token.size() == 1 &&  token[0] >= '0' && token[0] <=  '9') {
			num.push(token[0] - '0');
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (num.size() < 2) {
				std::cerr << "Error: insufficient operands for operator " << token << std::endl;
				return 1;
			}
		
			int second = num.top();
			num.pop();
			int first = num.top();
			num.pop();
			int result = 0;
			if (token == "+") {
				result = first + second;
			} else if (token == "-") {
				result = first - second;
			} else if (token == "*") {
				result = first * second;
			} else if (token == "/") {
				if (second == 0) {
					std::cerr << "Error: division by zero" << std::endl;
					return 1;
				}
				result = first / second;
			}
			num.push(result);
		}
		else {
			// std::cerr << "Error: invalid token \"" << token << "\"" << std::endl;
			std::cerr << "Error" << std::endl;
			return 1;
		}
	}
	if (num.size() != 1) {
		std::cerr << "Error: invalid RPN expression. Too many operands remain." << std::endl;
		return 1;
	}
	else {
		std::cout << num.top() << std::endl;
	}
	return 0;
}