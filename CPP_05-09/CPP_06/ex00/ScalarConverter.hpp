#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter() {};
		static bool isCharLiteral(const std::string &str);
		static bool isIntLiteral(const std::string &str);
		static bool isFloatLiteral(const std::string &str);
		static bool isDoubleLiteral(const std::string &str);

	
	public:
		enum eType {
			T_CHAR,
			T_INT,
			T_FLOAT,
			T_DOUBLE
		};

		static void printAll(double val, eType type);
		static void convert(const std::string &literal);
		static void printFloatAndDouble(double val, eType original);


};

#endif