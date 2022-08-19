/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:18:39 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/18 11:36:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->type = "Wrong Cat";
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " appeared!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " ain't no more!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &copy ) {
	this->type = copy.type;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}

// This will never happen because it is superceded by the bas class function

void		WrongCat::makeSound( void ) const {
	std::cout << this->type << " goes KATKATKAT!" << std::endl;
}