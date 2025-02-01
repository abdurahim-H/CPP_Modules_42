#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <cctype>

static std::string trim(const std::string &s)
{
    std::string result = s;
    while (!result.empty() && std::isspace(result[0]))
        result.erase(result.begin());
    while (!result.empty() && std::isspace(result[result.size() - 1]))
        result.erase(result.end() - 1);
    return result;
}

bool findRateForDate(const BitcoinExchange &btc, const std::string &date, float &rateOut)
{
	const std::map<std::string, float> &db = btc.data;

    std::map<std::string, float>::const_iterator it = db.upper_bound(date);

    if (it == db.begin())
    {
        return false;
    }
    --it;
    rateOut = it->second;
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return EXIT_FAILURE;
    }

    BitcoinExchange btc;
    btc.loadDataFromCSV("Bitcoin-price-USD.csv");

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return EXIT_FAILURE;
    }

	std::string headerLine;
	if (std::getline(inputFile, headerLine)) {
			//
	}
    std::string line;
    while (std::getline(inputFile, line))
    {
        if (line.empty())
            continue;

        std::size_t pipePos = line.find('|');
        if (pipePos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = trim(line.substr(0, pipePos));
        std::string valueStr = trim(line.substr(pipePos + 1));

        std::stringstream ss(valueStr);
        float value = 0.0f;
        ss >> value;
        if (ss.fail())
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        char leftover;
        if (ss >> leftover)
        {
            std::cerr << "Error: bad input => " << valueStr << std::endl;
            continue;
        }

        if (value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        float rate = 0.0f;
        if (!findRateForDate(btc, date, rate))
        {
            std::cerr << "Error: date is too early => " << date << std::endl;
            continue;
        }

        float result = value * rate;

        std::cout << date << " => " << value << " = " << result << std::endl;
    }

    inputFile.close();
    return EXIT_SUCCESS;
}
