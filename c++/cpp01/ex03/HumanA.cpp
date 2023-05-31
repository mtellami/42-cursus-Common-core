/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:44:52 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 21:59:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA ( void ) {
}

void HumanA::attack ( void ) {
	std::cout << _name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
