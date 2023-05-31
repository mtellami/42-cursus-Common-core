/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:25:43 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/29 07:10:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap( std::string _name ) : ClapTrap(_name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
	std::cout << "A copy of ScavTrap " << obj.name << " is created" << std::endl;
    *this = obj;
}

// Copy assignment operator
ScavTrap&   ScavTrap::operator=( const ScavTrap& obj ) {
    this->name = obj.name;
    return *this;
}

// Destructor
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

// Member functions
void    ScavTrap::attack( std::string const& target ) {
    if (energyPoints > 0 && hitPoints > 0) {
    	std::cout << "ScavTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!" << std::endl;
    	energyPoints--;
    }
}

void ScavTrap::guardGate ( void ) {
	std::cout << "ScavTrap " << this->name << " enters Gate keeper mode." << std::endl;
}