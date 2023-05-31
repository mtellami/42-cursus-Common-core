/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:49:06 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 04:29:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal( void ) : type("AAnimal") {
	// std::cout << "AAnimal default constructor called" << std::endl;
}

// Parameterized constructor
AAnimal::AAnimal( std::string _type) : type(_type){
	// std::cout << "AAnimal constructor called" << std::endl;
}

// Copy constructor
AAnimal::AAnimal( const AAnimal &obj) {
	// std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal &obj) {
	this->type = obj.type;
	// std::cout << "AAnimal assignment operator called" << std::endl;
	return *this;
}

// Destructor
AAnimal::~AAnimal( void ) {
	// std::cout << "AAnimal destructor called" << std::endl;
}

// Memeber function
void AAnimal::makeSound( void ) const {
	std::cout << this->type << " make sound" << std::endl;
}

std::string AAnimal::getType( void ) const {
	return this->type;
}
