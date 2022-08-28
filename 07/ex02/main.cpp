/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:48:20 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 13:54:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>	b(3);
	try
	{
		std::cout << b[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b[0] << std::endl;
	Array<int>	c = b;
	c[0] = 10;
	std::cout << b[0] << std::endl;
	std::cout << c[0] << std::endl;
	return (0);
}