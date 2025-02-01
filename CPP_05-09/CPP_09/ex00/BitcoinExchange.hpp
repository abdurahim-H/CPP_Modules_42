#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, float> data;
	
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void loadDataFromCSV(const std::string &filename);
};

#endif