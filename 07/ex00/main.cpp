/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:28:20 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 10:35:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 5;
	int b = 10;

	std::cout << "\e[1;94m" << "******PRINTING VALUES OF INTEGERS******" << "\e[0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "\e[1;94m" << "******SWAPPING INT VALUES******" << "\e[0m" << std::endl;
	swap(a, b);
	std::cout << "\e[1;94m" << "******PRINTING VALUES OF INTEGERS IN SAME ORDER******" << "\e[0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "\e[1;94m" << "******PRINTING MIN******" << "\e[0m" << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << "\e[1;94m" << "******PRINTING MAX******" << "\e[0m" << std::endl;
	std::cout << max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "\e[1;94m" << "******PRINTING VALUES OF STRINGS******" << "\e[0m" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\e[1;94m" << "******SWAPPING STRING VALUES******" << "\e[0m" << std::endl;
	::swap(c, d);
	std::cout << "\e[1;94m" << "******PRINTING VALUES OF STRINGS IN SAME ORDER******" << "\e[0m" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\e[1;94m" << "******PRINTING MIN******" << "\e[0m" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "\e[1;94m" << "******PRINTING MAX******" << "\e[0m" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}