/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:48:20 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 10:43:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "\e[1;94m" << "******CREATING ARRAY CLASS OF TYPE INT******" << "\e[0m" << std::endl;
	Array<int>	b(3);
	std::cout << "\e[1;94m" << "******TESTING OUT OF BOUNDS INDEX******" << "\e[0m" << std::endl;
	try
	{
		std::cout << b[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\e[1;94m" << "******PRINTING USING [] OPERATOR******" << "\e[0m" << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << "\e[1;94m" << "******DEEP COPYING ARRAY******" << "\e[0m" << std::endl;
	Array<int>	c = b;
	std::cout << "\e[1;94m" << "******CHANGING VALUE USING [] OPERATOR******" << "\e[0m" << std::endl;
	c[0] = 10;
	std::cout << "\e[1;94m" << "******PRINTING SAME INDEX OF BOTH ARRAYS WITH CHANGED VALUE******" << "\e[0m" << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << c[0] << std::endl;
	return (0);
}