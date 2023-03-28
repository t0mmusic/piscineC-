#ifndef BITCOINEXHANGE_HPP
#define BITCOINEXHANGE_HPP

#include <stdexcept>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

#define CSV_FILE "./data.csv"

class BitcoinExchange {
	private:
		// map for values in csv file
		std::map<int, float>	csv;
	protected:
	public:
		BitcoinExchange();
		BitcoinExchange( char *file_in );
		~BitcoinExchange();

		void	importCsv();
		void	importCompare( char *file_in );

		bool 	validate_date( std::string date );
		bool	validate_input( std::string value );
		int		dateToInt( std::string date );
		float	findClosestDate( std::string date );
};

#endif