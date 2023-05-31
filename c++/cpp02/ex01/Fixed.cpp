/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 07:20:28 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 15:55:18 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
	fixedPointNumber = 0;
}

// Parameterized constructor
Fixed::Fixed( const int n ) {
    std::cout << "Int constructor called" << std::endl;
	fixedPointNumber = n << fractionalBits;
}

Fixed::Fixed( const float n ) {
    std::cout << "Float constructor called" << std::endl;
	fixedPointNumber = std::roundf(n * (1 << fractionalBits));
}

// Copy constructor
Fixed::Fixed( const Fixed &obj ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(obj.getRawBits());
}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed &obj ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &obj )
        fixedPointNumber = obj.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Member fucntion
int Fixed::getRawBits( void ) const {
    return this->fixedPointNumber;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixedPointNumber = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->fixedPointNumber >> fractionalBits;
}

// Insertion operator overload
std::ostream& operator<<( std::ostream &os, Fixed const & obj ) {
    os << obj.toFloat();
    return os;
}
