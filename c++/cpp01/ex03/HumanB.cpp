/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:45:06 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/31 14:37:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB ( void ) {
}

void HumanB::attack ( void ) {
	if (this->_weapon) {
        std::cout << _name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
    } else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}

void HumanB::setWeapon ( Weapon &weapon) {
	this->_weapon = &weapon;
}
