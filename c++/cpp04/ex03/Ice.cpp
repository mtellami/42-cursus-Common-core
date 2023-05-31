/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:32:16 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:04:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Default destructor
Ice::Ice( void ) : AMateria("ice") {
	// std::cout << "* Ice: default constructor called *" << std::endl;
}

// Copy constructor
Ice::Ice( const Ice &obj ) : AMateria("ice") {
	*this = obj;
	// std::cout << "* Ice: copy constructor called *" << std::endl;
}

// Copy assignment operator
Ice& Ice::operator=( const Ice &obj ) {
	this->_type = obj._type;
	return *this;
}

// Destructor
Ice::~Ice( void ) {
	// std::cout << "* Ice: destructor called *" << std::endl;
}

// Member function
AMateria* Ice::clone( void ) const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
