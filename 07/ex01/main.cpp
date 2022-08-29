/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:50:42 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/29 10:39:18 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::cout << "\e[1;94m" << "******CREATING INT ARRAY******" << "\e[0m" << std::endl;
    int     intArr[] = {1, 2, 3};
    std::cout << "\e[1;94m" << "******RUNNING PRINT FUNCTION ON EACH ARRAY ELEMENT******" << "\e[0m" << std::endl;
    iter(intArr, 3, printCurrent);
    std::cout << std::endl;
    std::cout << "\e[1;94m" << "******APPLYING ADD FUNCTION ON EACH ELEMENT******" << "\e[0m" << std::endl;
    iter(intArr, 3, addTwo);
    std::cout << "\e[1;94m" << "******RUNNING PRINT FUNCTION ON EACH ARRAY ELEMENT******" << "\e[0m" << std::endl;
    iter(intArr, 3, printCurrent);
    std::cout << std::endl;
    
    std::cout << "\e[1;94m" << "******CREATING CHAR ARRAY******" << "\e[0m" << std::endl;
    char    string[] = "Hello";
    std::cout << "\e[1;94m" << "******RUNNING PRINT FUNCTION ON EACH ARRAY ELEMENT******" << "\e[0m" << std::endl;
    iter(string, 5, printCurrent);
    std::cout << std::endl;
    std::cout << "\e[1;94m" << "******APPLYING ADD FUNCTION ON EACH ELEMENT******" << "\e[0m" << std::endl;
    iter(string, 5, addTwo);
    std::cout << "\e[1;94m" << "******RUNNING PRINT FUNCTION ON EACH ARRAY ELEMENT******" << "\e[0m" << std::endl;
    iter(string, 5, printCurrent);
    std::cout << std::endl;
    return (0);
}