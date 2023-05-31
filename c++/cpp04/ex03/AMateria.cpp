/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:53:06 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:07:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// default constructor
AMateria::AMateria( void ) {
	// std::cout << "Abstract Materia default constructor called" << std::endl;
}

// parameterized constructor
AMateria::AMateria( std::string const & type ) : _type(type) {
	// std::cout << "Abstract Materia constructor called" << std::endl;
}

// Copy constructor
AMateria::AMateria( const AMateria &obj ) {
	*this = obj;
}

// Copy assignment operator
AMateria& AMateria::operator=( const AMateria &obj ) {
	(void)obj;
	return *this;
}

// Destructor
AMateria::~AMateria( void ) {
	// std::cout << "Abstract Materia destructor called" << std::endl;
}

// Member function
std::string const & AMateria::getType( void ) const {
	return this->_type;
}

AMateria* AMateria::clone( void ) const {
	return (AMateria *)this;
}

void AMateria::use( ICharacter& target ) {
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
