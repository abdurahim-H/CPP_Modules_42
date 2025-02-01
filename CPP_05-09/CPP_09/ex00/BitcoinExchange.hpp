#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
	private:
		//
	public:
		std::map<std::string, float> data;
		BitcoinExchange();
		~BitcoinExchange();
		void loadDataFromCSV(const std::string &filename);
};

#endif