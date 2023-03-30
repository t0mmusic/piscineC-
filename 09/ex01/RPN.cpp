# include "RPN.hpp"

RPN::RPN() {
	testCases(1, "");
	testCases(2, "8 9 * 9 - 9 - 9 - 4 - 1 +");
	testCases(3, "7 7 * 7 -");
	testCases(4, "1 2 * 2 / 2 * 2 4 - +");
	testCases(5, "(1 + 1)");
	testCases(6, " 	1			    1  	 	+    ");
	testCases(7, "1 1 + + +");
	testCases(8, "1 + 1");
	testCases(9, "2 5 * 4 + 3 2 * 1 + / ");
	testCases(9, "1 2 3 * + 4 5 6 7 + + - +");
	testCases(9, "-9 1.5 *");
	testCases(9, "1");
	testCases(9, "a");
}

RPN::RPN( char *s ) {
	if (split(s))
	{
		process();
	}
}

RPN::~RPN() { }

// test cases for evaluation
void	RPN::testCases( int val, std::string s) {
	std::cout << "Test case " << val << ": " << s << std::endl;
	if (split(s))
	{
		process();
	}
	while (!numStack.empty())
	{
		numStack.pop();
	}
	while (!inputs.empty())
	{
		inputs.pop();
	}
}

// pulls top two values from stack to be operated on
bool	RPN::stackMaths( char op ) {
	float	val1, val2;

	if (!numStack.empty())
	{
		val1 = numStack.top();
		numStack.pop();
	}
	else
	{
		return (false);
	}
	if (!numStack.empty())
	{
		val2 = numStack.top();
		numStack.pop();
	}
	else
	{
		return (false);
	}
	numStack.push(opVals(val2, val1, op));
	return (true);
}

// performs mathematical operations on floats from the stack
float	RPN::opVals( float val1, float val2, char op ) {
	switch(op) {
		case '+':
			return (val1 + val2);
			break;
		case '-':
			return (val1 - val2);
			break;
		case '*':
			return (val1 * val2);
			break;
		case '/':
			return (val1 / val2);
			break;
		default:
			return (0);
			break;
	}
}

// loops over current array to see if it contains only an operator
bool	RPN::isOp( std::string s ) {
	for (size_t i = 0; s[i]; i++)
	{
		if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
		{
			return (false);
		}
		if (i > 0)
		{
			return (false);
		}
	}
	return (true);
}

// loops over current array to see if it contains only numerical values
bool	RPN::isVal( std::string s ) {
	for (size_t i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-')
		{
			return (false);
		}
	}
	return (true);
}

// converts a string to a float
float	RPN::stof( std::string s ) {
	float	r;
	std::stringstream ss(s);

	ss >> r;
	return (r);
}

// check is digit or is operator
void	RPN::process(  ) {
	while (!inputs.empty())
	{
		if (isOp(inputs.top()))
		{
			if (!stackMaths(inputs.top()[0]))
			{
				std::cout << "Error: Invalid operator placement." << std::endl;
				return ;
			}
		} // putting this after isOp check allows negative values
		else if (isVal(inputs.top()))
		{
			// adds value to stack
			numStack.push(stof(inputs.top()));
		}
		else
		{
			std::cout << "Error: unrecognised value => " << inputs.top() << std::endl;
			return ;
		}
		inputs.pop();
	}
	float	result = numStack.top();
	numStack.pop();

	if (numStack.empty())
	{
		std::cout << result << std::endl;
	}
	else
	{
		std::cout << "Error: Not enough operators." << std::endl;
	}
}

// splits a single string into a string stack
bool	RPN::split( std::string s ) {
	int	i = 0;

	while (s[i])
	{
		i++;
	}
	if (!i)
	{
		std::cout << "Error: No values in stack." << std::endl;
		return (false);
	}
	for (int j = i; j >= 0; j--) // reverse iterate through array to load stack in correct order
	{
		if (isspace(s[j]) && !isspace(s[j + 1]) && s[j + 1])
		{
			inputs.push(&s[j + 1]);
		}
		if (!isspace(s[j]) && isspace(s[j + 1]))
		{
			s[j + 1] = 0;
		}
	}
	if (!isspace(s[0]))
	{
		inputs.push(&s[0]);
	}
	return (true);
}
