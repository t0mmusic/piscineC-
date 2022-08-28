/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:50:42 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/27 12:27:23 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int     intArr[] = {1, 2, 3};
    iter(intArr, 3, printCurrent);
    std::cout << std::endl;
    iter(intArr, 3, addTwo);
    iter(intArr, 3, printCurrent);
    std::cout << std::endl;
    
    char    string[] = "Hello";
    iter(string, 5, printCurrent);
    std::cout << std::endl;
    iter(string, 5, addTwo);
    iter(string, 5, printCurrent);
    std::cout << std::endl;
    return (0);
}