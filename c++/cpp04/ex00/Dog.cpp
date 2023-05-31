/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:49:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 06:48:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog( const Dog &obj ) : Animal(obj) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
Dog& Dog::operator=( const Dog &obj ) {
	this->type = obj.type;
	std::cout << "Dog assignment operator called" << std::endl;
	return *this;
}

// Destructor
Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

// Member function
void Dog::makeSound( void ) const {
	std::cout << "Bark Bark" << std::endl;
}
