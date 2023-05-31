/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:49:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 02:38:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal( "Dog" ) {
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog( const Dog &obj ) : Animal(obj) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
Dog& Dog::operator=( const Dog &obj ) {
	if (this != &obj) {
		this->type = obj.type;
		this->brain = new Brain( *obj.brain );
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return *this;
}

// Destructor
Dog::~Dog( void ) {
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

// Member function
void Dog::makeSound( void ) const {
	std::cout << "Bark Bark" << std::endl;
}
