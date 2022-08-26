/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:31:37 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 17:00:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    Data        testData;
    Data        *newData;
    uintptr_t   fakePointer;

    std::cout << "\e[1;94m" << "******PRINTING ADDRESS OF DATA******" << "\e[0m" << std::endl;
    std::cout << &testData << std::endl;
    std::cout << "\e[1;94m" << "******PRINTING DATA MEMBER******" << "\e[0m" << std::endl;
    std::cout << testData.getMember() << std::endl;
    fakePointer = serialize(&testData);
    std::cout << "\e[1;94m" << "******PRINTING DECIMAL VALUE OF ADDRESS******" << "\e[0m" << std::endl;
    std::cout << fakePointer << std::endl;
    newData = deserialize(fakePointer);
    std::cout << "\e[1;94m" << "******PRINTING ADDRESS OF CLONED DATA******" << "\e[0m" << std::endl;
    std::cout << newData << std::endl;
    std::cout << "\e[1;94m" << "******PRINTING CLONED DATA MEMBER******" << "\e[0m" << std::endl;
    std::cout << newData->getMember() << std::endl;
}