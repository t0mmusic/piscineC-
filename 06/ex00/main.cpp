/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:40:28 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 21:58:41 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Invalid Input!" << std::endl;
        return (1);
    }
    std::string arg = checkChar(av[1]);
    Scalar  scal(arg);
    if (!scal.validCheck())
    {
        std::cout <<
        "char: impossible" << std::endl <<
        "int: impossible" << std::endl <<
        "float: impossible" << std::endl <<
        "double: impossible" << std::endl;
        return (0);
    }
    std::cout << "char: ";
    try
    {
        std::cout << scal.charConvert() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "int: ";
    try
    {
        std::cout << scal.intConvert() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    float f = scal.floatConvert();
    if (f == (int)f)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
    }
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << scal.doubleConvert() << std::endl;

    return (0);
}