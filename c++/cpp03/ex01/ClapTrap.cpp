/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:05:02 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/04 17:11:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap( std::string _name ) {
	this->name = _name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "A copy of ClapTrap " << obj.name << " is created" << std::endl;
    *this = obj;
}

// Copy assignment operator
ClapTrap&   ClapTrap::operator=( const ClapTrap& obj ) {
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
}

// Member functions

void    ClapTrap::attack( std::string const& target ) {
    if (energyPoints > 0 && hitPoints > 0) {
    	std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!" << std::endl;
    	energyPoints--;
    }
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (hitPoints > 0 && energyPoints > 0) {
    	std::cout << "ClapTrap " << name << " takes "
			<< amount << " damage!" << std::endl;
    	hitPoints -= amount;
    }
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (energyPoints > 0 && hitPoints > 0) {
    	std::cout << "ClapTrap " << name << " repairs itself for "
			<< amount << " hitpoints!" << std::endl;
    	energyPoints--;
    	hitPoints += amount;
    }
}

std::string ClapTrap::getName ( void ) {
	return this->name;
}

void ClapTrap::setName ( std::string newName ) {
	std::cout << "ClapTrap " << name << " changed his name to " << newName << std::endl;
	this->name = newName;
}

void ClapTrap::setDamage ( unsigned int damage ) {
	this->attackDamage = damage;
}
