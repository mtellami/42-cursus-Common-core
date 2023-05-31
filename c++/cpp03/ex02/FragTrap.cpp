/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 07:17:04 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/05 23:49:48 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap( std::string _name ) : ClapTrap(_name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
	std::cout << "A copy of FragTrap " << obj.name << " is created" << std::endl;
    *this = obj;
}

// Copy assignment operator
FragTrap&   FragTrap::operator=( const FragTrap& obj ) {
    this->name = obj.name;
    return *this;
}

// Destructor
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
}

// Member function
void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << name << " requests a high five" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (energyPoints > 0 && hitPoints > 0) {
    	std::cout << "FragTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!" << std::endl;
    	energyPoints--;
    }
}