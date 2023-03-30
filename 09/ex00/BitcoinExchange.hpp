#ifndef BITCOINEXHANGE_HPP
#define BITCOINEXHANGE_HPP

#include <stdexcept>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

#define CSV_FILE "../utils/data.csv"

class BitcoinExchange {
	private:
		// map for values in csv file
		std::map<int, float>	csv;
	protected:
	public:
		BitcoinExchange();
		BitcoinExchange( char *file_in );
		~BitcoinExchange();

		bool	importCsv();
		void	importCompare( char *file_in );

		bool	exists(const char *name);
		bool 	validate_date( std::string date );
		bool	validate_input( std::string value );
		int		dateToInt( std::string date );
		float	findClosestDate( std::string date );
		void	evaluate( std::string line );
		void	test_data();
};

#endif
