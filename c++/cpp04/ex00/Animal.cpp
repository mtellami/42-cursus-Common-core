/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:49:06 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 07:13:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal( void ) : type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

// Parameterized constructor
Animal::Animal( std::string _type) : type(_type){
	std::cout << "Animal constructor called" << std::endl;
}

// Copy constructor
Animal::Animal( const Animal &obj) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal &obj) {
	this->type = obj.type;
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

// Destructor
Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

// Memeber function
void Animal::makeSound( void ) const {
	std::cout << this->type << " make sound" << std::endl;
}

std::string Animal::getType( void ) const {
	return this->type;
}
