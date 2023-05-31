/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:58:54 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 00:31:56 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constuctor
Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointNumber = 0;
}

// Copy constructor
Fixed::Fixed( const Fixed &obj ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(obj.getRawBits());
}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed &obj ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixedPointNumber = obj.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

// Member function
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixedPointNumber = raw;
}
