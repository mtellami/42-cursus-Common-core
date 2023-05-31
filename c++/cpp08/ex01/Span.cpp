/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:10:55 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/24 14:38:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Default constructor
Span::Span( void ) : _vector(0), _size(0) {
}

// Parameterized constructor
Span::Span( unsigned int N) : _vector(0), _size(N) {
}

// Copy constructor
Span::Span( const Span& obj ) {
	*this = obj;
}

// Copy assignment operator
Span& Span::operator=( const Span& obj ) {
	if (this != &obj) {
		this->_vector = obj.getVector();
		this->_size = obj.getSize();
	}
	return *this;
}

// Destructor
Span::~Span( void ) {
}

// Setters
void Span::addNumber( int number ) {
	if ( this->_vector.size() == this->_size)
		throw std::range_error("Span::addNumber: No space left");
	this->_vector.push_back( number );
}

void Span::addRange( _iterator begin, _iterator end) {
	_container _tmp( begin, end);
	if (_tmp.size() > this->_size - this->_vector.size())
		throw std::range_error("Span::addRange: No space left");
	this->_vector.insert(this->_vector.end(), _tmp.begin(), _tmp.end());
}

// Getters
_container Span::getVector( void ) const {
	return this->_vector;
}

unsigned int Span::getSize( void ) const {
	return this->_size;
}

// Memeber functions
int Span::shortestSpan( void ) {
	_container _tmp = this->_vector;

	if (this->_size < 2)
		throw std::range_error("Span::shortestSpan: No span can be found");
	sort(_tmp.begin(), _tmp.end());
	int _span = *(_tmp.begin() + 1) - *(_tmp.begin());
	if (_tmp.size() == 2)
		return _span;
	for (_iterator _it = _tmp.begin() + 1; _it != _tmp.end() - 1 && _span; _it++) {
		if (*(_it + 1) - *(_it) < _span)
			_span = *(_it + 1) - *(_it);
	}
	return _span;
}

int Span::longestSpan( void ) {
	if (this->_size < 2)
		throw std::range_error("span::longestSpan: No span can be found");
	return *(std::max_element(_vector.begin(), _vector.end()))
		- *(std::min_element(_vector.begin(), _vector.end()));
}
