/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:15:32 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 06:07:44 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Undefined"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
	std::cout << "Parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &obj ) {
	this->_type = obj._type;
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType( void ) {
	return this->_type;
}
