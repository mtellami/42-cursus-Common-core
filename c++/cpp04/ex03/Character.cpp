/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:42:17 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:08:18 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor
Character::Character( std::string const &name ) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Character constructor called" << std::endl;
}

// Copy constructor
Character::Character( const Character &obj ) : _name(obj._name) {
	*this = obj;
	// std::cout << "Character copy constructor called" << std::endl;
}

// Copy assignment operator
Character& Character::operator=( const Character &obj ) {
	if (this != &obj) {
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = obj._inventory[i];
	}
	// std::cout << "Character copy assignment operator called" << std::endl;
	return *this;
}

// Destructor
Character::~Character( void ) {
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 && this->_inventory[i]; i++)
		delete this->_inventory[i];
}

// Member function
std::string const & Character::getName( void ) const {
	return this->_name;
}

void Character::equip( AMateria* m ) {
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
            // std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
			break ;
		}
}

void Character::unequip( int idx ) {
	if (idx < 4 && this->_inventory[idx]) {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        // std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
}

void Character::use( int idx, ICharacter& target ) {
	if (idx < 4 && this->_inventory[idx]) {
        this->_inventory[idx]->use(target);
        // std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
}
