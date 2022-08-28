/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:17:24 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 13:42:31 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span    smol(10);
    std::cout << "\e[1;94m" << "******TESTING SMALLEST SPAN ON EMPTY VECTOR******" << "\e[0m" << std::endl;
    try
    {
        std::cout << smol.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    smol.addNumber(15);
    std::cout << "\e[1;94m" << "******TESTING LARGEST SPAN ON VECTOR WITH ONE NUMBER******" << "\e[0m" << std::endl;
    try
    {
        std::cout << smol.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 1; i < 10; i++)
    {
        smol.addNumber(i);
    }
    std::cout << "\e[1;94m" << "******TESTING SMALLEST SPAN******" << "\e[0m" << std::endl;
    std::cout << smol.shortestSpan() << std::endl;
    std::cout << "\e[1;94m" << "******TESTING LONGEST SPAN******" << "\e[0m" << std::endl;
    std::cout << smol.longestSpan() << std::endl;
    std::cout << "\e[1;94m" << "******TESTING ADDING TO FULL SPAN******" << "\e[0m" << std::endl;
    try
    {
        smol.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Span    big(10000);
    std::cout << "\e[1;94m" << "******TESTING LARGE SPAN WITH RANDOM VALUES (TAKES A MINUTE)******" << "\e[0m" << std::endl;
    for (int i = 0; i < 10000; i++)
    {
        int random = rand() % 10000000000;
        // std::cout << random << std::endl;
        big.addNumber(random);
    }
    std::cout << "\e[1;94m" << "******TESTING SHORTEST SPAN******" << "\e[0m" << std::endl;
    std::cout << big.shortestSpan() << std::endl;
    std::cout << "\e[1;94m" << "******TESTING LONGEST SPAN******" << "\e[0m" << std::endl;
    std::cout << big.longestSpan() << std::endl;
    
    return (0);
}