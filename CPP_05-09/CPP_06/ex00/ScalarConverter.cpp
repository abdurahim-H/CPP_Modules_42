#include "ScalarConverter.hpp"
#include <limits>
#include <climits>
#include <cmath> 

bool ScalarConverter::isCharLiteral(const std::string &str)
{
	return (str.size() == 1 &&
		!std::isdigit(str[0]) && std::isprint(str[0]));
}

bool ScalarConverter::isIntLiteral(const std::string &str)
{
	std::stringstream ss(str);
	int I;
	ss >> I;
	return (ss.eof() && !ss.fail());
}

bool ScalarConverter::isFloatLiteral(const std::string &str)
{
	if (str == "nanf" || str == "+inff" || str == "-inff") {
		return true;
	}
	if (str.back() == 'f') {
		std::stringstream ss(str.substr(0, str.size() - 1));
		float f;
		ss >> f;
		return ss.eof() && !ss.fail();
	}
	return false;
}

bool ScalarConverter::isDoubleLiteral(const std::string &str)
{
	if (str == "nan" || str == "+inf" || str == "-inf") {
		return true;
	}
	std::stringstream ss(str);
	double d;
	ss >> d;
	return (ss.eof() && !ss.fail());
	return false;
}

void ScalarConverter::printAll(double val, eType original)
{
	std::cout << "char: ";
	if (std::isinf(val) || std::isnan(val) ||
		val < static_cast<double>(CHAR_MIN) || val > static_cast<double>(CHAR_MAX))
	{
		std::cout << "impossible\n";
	}
	else {
		char c = static_cast<char>(val);
		if (std::isprint(c))
			std::cout << "'" << c << "'\n";
		else
			std::cout << "Non displayable\n";
	}

	std::cout << "int: ";
	if (std::isinf(val) || std::isnan(val) ||
		val < static_cast<double>(INT_MIN) || val > static_cast<double>(INT_MAX))
	{
		std::cout << "impossible\n";
	}
	else {
		int i = static_cast<int>(val);
		std::cout << i << "\n";
	}

	printFloatAndDouble(val, original);
}

void ScalarConverter::printFloatAndDouble(double val, eType original)
{
	(void)original;
	std::cout << "float: ";
	if (std::isnan(val))
		std::cout << "nanf\n";
	else if (std::isinf(val))
		std::cout << (val > 0 ? "+inff\n" : "-inff\n");
	else {
		float f = static_cast<float>(val);
		std::cout << f << (f == static_cast<int>(f) ? ".0f\n" : "f\n");
	}

	std::cout << "double: ";
	if (std::isnan(val))
		std::cout << "nan\n";
	else if (std::isinf(val))
		std::cout << (val > 0 ? "+inf\n" : "-inf\n");
	else {
		std::cout << val << (val == static_cast<int>(val) ? ".0\n" : "\n");
	}
}

void ScalarConverter::convert(const std::string &literal)
{
	double storedValue;
	eType original;

	if (isCharLiteral(literal)) {
		char c = literal[0];
		storedValue = static_cast<double>(c);
		original = T_CHAR;
		printAll(storedValue, original);
		return;
	}
	if (isIntLiteral(literal)) {
		std::stringstream ss(literal);
		int i;
		ss >> i;
		storedValue = static_cast<double>(i);
		original = T_INT;
		printAll(storedValue, original);
		return;
	}
	if (isFloatLiteral(literal)) {
		original = T_FLOAT;
		if (literal == "nanf")
			storedValue = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inff")
			storedValue = std::numeric_limits<double>::infinity();
		else if (literal == "-inff")
			storedValue = -std::numeric_limits<double>::infinity();
		else {
			std::stringstream ss(literal.substr(0, literal.size() - 1));
			float f;
			ss >> f;
			storedValue = static_cast<double>(f);
		}
		printAll(storedValue, original);
		return;
	}
	if (isDoubleLiteral(literal)) {
		// std::cout << "Detected DOUBLE literal: " << literal << std::endl;
		original = T_DOUBLE;
		if (literal == "nan")
			storedValue = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inf")
			storedValue = std::numeric_limits<double>::infinity();
		else if (literal == "-inf")
			storedValue = -std::numeric_limits<double>::infinity();
		else {
			std::stringstream ss(literal);
			double d;
			ss >> d;
			storedValue = d;
		}
		
		printAll(storedValue, original);
		return;
	}
}

