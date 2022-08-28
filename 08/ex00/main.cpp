/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:08:51 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 12:11:07 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	numbers;
	std::list<int>		moreNumbers;
	std::vector<char>	characters;
	std::vector<std::string>	words;
	for (int i = 0; i < 5; i++)
	{
		numbers.push_back(1);
	}
	for (int i = 0; i < 5; i++)
	{
		characters.push_back('h');
	}
	for (int i = 0; i < 10; i += 2)
	{
		moreNumbers.push_back(i);
	}
	for (int i = 0; i < 5; i++)
	{
		words.push_back("Hello World!");
	}
	std::cout << "\e[1;94m" << "******TESTING VALID INDEX USING VECTOR******" << "\e[0m" << std::endl;
	easyfind(numbers, 1);
	std::cout << "\e[1;94m" << "******TESTING VALID INDEX USING LIST******" << "\e[0m" << std::endl;
	easyfind(moreNumbers, 6);
	std::cout << "\e[1;94m" << "******TESTING DIFFERENT DATA TYPE******" << "\e[0m" << std::endl;
	easyfind(characters, 'h');
	std::cout << "\e[1;94m" << "******COMPLEX DATA TYPES THROW COMPILE TIME ERROR******" << "\e[0m" << std::endl;
	// easyfind(words, 2);	more complex data types throw compile time errors during comparison :(
	std::cout << "\e[1;94m" << "******TESTING INVALID INDEX******" << "\e[0m" << std::endl;
	try
	{
		easyfind(numbers, 7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\e[1;94m" << "******TESTING VALID INDEX, INVALID VALUE******" << "\e[0m" << std::endl;
	try
	{
		easyfind(numbers, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}