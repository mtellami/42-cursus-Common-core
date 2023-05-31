/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:46:47 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 04:25:52 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}

// Copy constructor
Brain::Brain( const Brain &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

// Copy assignment operator
Brain& Brain::operator=( const Brain &obj ) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return *this;
}

// Destructor
Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}