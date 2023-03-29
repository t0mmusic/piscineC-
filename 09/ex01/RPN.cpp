# include "RPN.hpp"

RPN::RPN() { }

RPN::RPN( char *s ) {
	split(s);
	process();
}

RPN::~RPN() { }

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
		std::cerr << "Error: Stack Empty." << '\n';
		return (false);
	}
	if (!numStack.empty())
	{
		val2 = numStack.top();
		numStack.pop();
	}
	else
	{
		std::cerr << "Error: Stack Empty." << '\n';
		return (false);
	}
	numStack.push(opVals(val2, val1, op));
	// std::cout << numStack.top() << std::endl;
	return (true);
}

// performs mathematical operations on floats from the stack
float	RPN::opVals( float val1, float val2, char op ) {
	// std::cout << val1 << " " << op << " " << val2 << " = ";
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
	bool	success = true;

	while (!inputs.empty())
	{
		if (isOp(inputs.top()))
		{
			if (!stackMaths(inputs.top()[0]))
			{
				std::cerr << "Error: extra operator." << std::endl;
				success = false;
				break ;
			}
		} // putting this after isOp check allows negative values 
		else if (isVal(inputs.top()))
		{
			// adds value to stack
			numStack.push(stof(inputs.top()));
		}
		else
		{
			std::cerr << "Error: unrecognised value." << std::endl;
			success = false;
			break ;
		}
		inputs.pop();
	}
	if (success)
	{
		std::cout << numStack.top() << std::endl;
	}
}

// splits a char array into a string stack
void	RPN::split( char *s ) {
	int	i = 0;

	while (s[i])
	{
		i++;
	} // reverse iterate through array to load stack in correct order
	for (int j = i; j >= 0; j--)
	{
		if (s[j] == ' ' && s[j + 1] != ' ' && s[j + 1])
		{
			inputs.push(&s[j + 1]);
		}
		if (s[j] != ' ' && s[j + 1] == ' ')
		{
			s[j + 1] = 0;
		}
	}
	if (!isspace(s[0]))
	{
		inputs.push(&s[0]);
	}
}