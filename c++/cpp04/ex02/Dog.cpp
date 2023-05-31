/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:49:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 04:34:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : AAnimal( "Dog" ) {
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog( const Dog &obj ) {
	this->type = obj.getType();
	this->brain = new Brain( *obj.brain );
	std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog& Dog::operator=( const Dog &obj ) {
	if (this != &obj) {
		this->type = obj.type;
		if (this->brain)
			delete this->brain;
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
