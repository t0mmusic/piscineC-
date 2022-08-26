/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:49:17 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 16:50:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	std::cout << "\e[1;94m" << "******INSTANTIATE BASE CLASS POINTERS******" << "\e[0m" << std::endl;
	Base    *type;
	Base	*noType = new Base();

	std::cout << "\e[1;94m" << "******RANDOMLY CAST FIRST POINTER******" << "\e[0m" << std::endl;
	type = generate();
	std::cout << "\e[1;94m" << "******FIND TYPE WITH POINTER******" << "\e[0m" << std::endl;
	identify(type);
	std::cout << "\e[1;94m" << "******FIND TYPE WITH ALIAS******" << "\e[0m" << std::endl;
	identify(*type);
	std::cout << "\e[1;94m" << "******FIND INVALID TYPE WITH POINTER******" << "\e[0m" << std::endl;
	identify(noType);
	std::cout << "\e[1;94m" << "******FIND INVALID TYPE WITH ALIAS******" << "\e[0m" << std::endl;
	identify(*noType);
	delete	type;
	delete	noType;
	return (0);
}