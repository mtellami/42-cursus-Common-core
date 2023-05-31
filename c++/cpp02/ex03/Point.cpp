/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:22:13 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 17:07:23 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constructor
Point::Point( void ) : x(0), y(0) {
}

// Parameterized constructor
Point::Point( const float _x, const float _y ) : x(_x), y(_y) {	
}

// Copy constructor
Point::Point( const Point &obj) : x(obj.x), y(obj.y) {
}

// Destructor
Point::~Point( void ) {
}

// Copy assignment operator
Point& Point::operator=( const Point &obj) {
	if (this != &obj)
		*this = obj;
	return *this;
}

// Member function
Fixed Point::getX( void ) const {
	return this->x;
}

Fixed Point::getY( void ) const {
	return this->y;
}
