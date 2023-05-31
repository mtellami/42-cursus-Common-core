/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:22:05 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/28 22:17:02 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor
Fixed::Fixed(void) {
	fixedPointNumber = 0;
}

// Constructor constant integer
Fixed::Fixed( const int n ) {
	fixedPointNumber = n << fractional_bits;
}

// Constructor floating-point number
Fixed::Fixed( const float n ) {
	fixedPointNumber = std::roundf(n * (1 << fractional_bits));
}

// Copy constructor
Fixed::Fixed( const Fixed &obj ) {
    *this = obj;
}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed &obj ) {
    if ( this != &obj )
        fixedPointNumber = obj.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed() {
}

// Member functions
int Fixed::getRawBits( void ) const {
    return this->fixedPointNumber;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixedPointNumber = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractional_bits );
}

int     Fixed::toInt( void ) const {
    return this->fixedPointNumber >> fractional_bits;
}

// stream output operator
std::ostream& operator<<( std::ostream &os, Fixed const & obj ) {
    os << obj.toFloat();
    return os;
}

// Arithmetic operators
Fixed   Fixed::operator+( const Fixed &obj ) const {
    return Fixed( this->toFloat() + obj.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &obj ) const {
    return Fixed( this->toFloat() - obj.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &obj ) const {
    return Fixed( this->toFloat() * obj.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &obj ) const {
	if (!obj.toFloat())
	{
		std::cerr << "Error: Division by zero" << std::endl;
		exit(EXIT_FAILURE);
	}
    return Fixed( this->toFloat() / obj.toFloat() );
}

// Increment and decrement
Fixed &Fixed::operator++(void) {
	this->fixedPointNumber++;
	return *this;
}

Fixed &Fixed::operator--(void) {
	this->fixedPointNumber--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->fixedPointNumber++;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->fixedPointNumber--;
	return tmp;
}

// comparison operators
bool    Fixed::operator>( const Fixed &obj ) const {
    return this->getRawBits() > obj.getRawBits();
}

bool    Fixed::operator<( const Fixed &obj ) const {
    return this->getRawBits() < obj.getRawBits();
}

bool    Fixed::operator>=( const Fixed &obj ) const {
    return this->getRawBits() >= obj.getRawBits();
}

bool   Fixed::operator<=( const Fixed &obj ) const {
    return this->getRawBits() <= obj.getRawBits();
}

bool  Fixed::operator==( const Fixed &obj ) const {
    return this->getRawBits() == obj.getRawBits();
}

bool    Fixed::operator!=( const Fixed &obj ) const {
    return this->getRawBits() != obj.getRawBits();
}

// Min & Max
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a.fixedPointNumber > b.fixedPointNumber) ? b : a;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
	return (a.fixedPointNumber > b.fixedPointNumber) ? b : a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a.fixedPointNumber > b.fixedPointNumber) ? a : b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
	return (a.fixedPointNumber > b.fixedPointNumber) ? a : b;
}
