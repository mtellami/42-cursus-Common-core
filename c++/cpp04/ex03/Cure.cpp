/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:32:33 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:04:28 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Default constructor
Cure::Cure( void ) : AMateria("cure") {
	// std::cout << "* Cure: default constructor called *" << std::endl;
}

// Copy constructor
Cure::Cure( const Cure &obj ) : AMateria("cure") {
	*this = obj;
	// std::cout << "* Cure: copy constructor called *" << std::endl;
}

// Copy assignment operator
Cure& Cure::operator=( const Cure &obj ) {
	this->_type = obj._type;
	return *this;
}

// Destructor
Cure::~Cure( void ) {
	// std::cout << "* Cure: destructor called *" << std::endl;
}

// Member function
AMateria* Cure::clone( void ) const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
