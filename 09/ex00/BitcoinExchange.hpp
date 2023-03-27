#ifndef BITCOINEXHANGE_HPP
#define BITCOINEXHANGE_HPP

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>

#define CSV_FILE "./data.csv"

class BitcoinExchange {
	private:
		// map for values in csv file
		std::map<std::string, float>	csv;
		// vector for storing dates as ints
		std::vector<int>				dates;
	protected:
	public:
		BitcoinExchange();
		~BitcoinExchange();

		void	importCsv();
		void	importCompare( char *file_in );

		bool 	validate_date( std::string date );
		bool	validate_input( std::string value );
		int		dateToInt( std::string date );
		float	findClosestDate( std::string date );
};

#endif