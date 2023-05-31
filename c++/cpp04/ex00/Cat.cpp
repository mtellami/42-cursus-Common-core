/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:50:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 05:59:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default construtor
Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

// Copy constrructor
Cat::Cat( const Cat &obj) : Animal(obj) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
Cat& Cat::operator=( const Cat &obj) {
	this->type = obj.type;
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

// Destructor
Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

// Member function
void Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
