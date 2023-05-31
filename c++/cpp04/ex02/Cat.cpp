/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:50:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 04:30:15 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default construtor
Cat::Cat( void ) : AAnimal( "Cat" ) {
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

// Copy constrructor
Cat::Cat( const Cat &obj ) {
	this->type = obj.getType();
	this->brain = new Brain( *obj.brain );
	std::cout << "Cat copy constructor called" << std::endl;
}

// Copy assignment operator
Cat& Cat::operator=( const Cat &obj ) {
	if (this != &obj) {
		this->type = obj.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain( *obj.brain );
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

// Destructor
Cat::~Cat( void ) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

// Member function
void Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
