#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <stack>

class RPN {
	private:
		std::stack<float>		numStack;
		std::stack<std::string>	inputs;
	protected:
	public:
		RPN();
		RPN( char *s );
		~RPN();

		bool	stackMaths( char op );
		float	opVals( float val1, float val2, char op );
		void	process(  );
		bool	isOp( std::string s );
		bool	isVal( std::string s );
		bool	split( std::string );
		float	stof( std::string s );
		void	testCases( int val, std::string s);
};

#endif
