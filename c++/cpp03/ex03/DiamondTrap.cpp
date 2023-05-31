/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 08:24:59 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/05 23:59:40 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap( std::string _name ) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name) {
	this->name = _name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << _name << " is created" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj) {
	std::cout << "A copy of DiamondTrap " << obj.name << " is created" << std::endl;
    *this = obj;
}

// Copy assignment operator
DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& obj ) {
    this->name = obj.name;
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

// Member function
void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap " << this->name
		<< " is ClapTrap " << ClapTrap::name << std::endl;
}
