/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:21:56 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/26 15:43:10 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
    _member = "Hello World";
}

Data::Data(const Data &copy) {
    _member = copy._member;
}

Data::~Data() {

}

Data	&Data::operator=(const Data &assign) {
    _member = assign._member;
    return (*this);
}

std::string	Data::getMember( void ) {
    return (_member);
}

uintptr_t	serialize( Data *ptr ) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize( uintptr_t raw ) {
    return (reinterpret_cast<Data*>(raw));
}