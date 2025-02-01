#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <map>
#include <iostream>

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDataFromCSV(const std::string &filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: cannot open file." << filename << std::endl;
		return;
	}
	// std::string line;
	// bool isHeader = false;
	// if (std::getline(file, line)) {
	// 	std::istringstream ss(line);
	// 	std::string header;
	// 	std::map<std::string, bool> headers;
	// 	while (std::getline(ss, header, ',')) {
	// 		headers[header] true
	// 	}
	// 	if (headers.find("date") != headers.end()) {
	// 		isHeader = true;
	// 	}
	// }
	// if (isHeader && std::getline(file, line)) {
	// 	//
	// }
	{
		std::string headerLine;
		if (std::getline(file, headerLine)) {
			//
		}
	}
	std::string line;
	while (std::getline(file, line))
	{
		if(line.empty()) {
			continue;
		}
		size_t commaPos = line.find(',');
		if (commaPos == std::string::npos) {
			std::cerr << "Error: invalid format => " << line << std::endl;
			continue;
		}

		std::string date = line.substr(0, commaPos);
		std::string rateStr = line.substr(commaPos + 1);

		std::stringstream ss(rateStr);
		float rate = 0.0f;
		ss >> rate;
		if (ss.fail()) {
			std::cerr << "Error: invalid rate format => " << rateStr << std::endl;
    		continue;
		}
		char leftOver;
		if (ss >> leftOver) {
			std::cerr << "Error: invalid format (extra data) => " << rateStr << std::endl;
    		continue;
		}
		this->data[date] = rate;
	}
	file.close();
}