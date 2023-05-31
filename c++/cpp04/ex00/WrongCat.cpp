/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:15:59 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 22:03:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat"){
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &obj ) : WrongAnimal(obj) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=( const WrongCat &obj ) {
	this->_type = obj._type;
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << "WrongCat make sound" << std::endl;
}
