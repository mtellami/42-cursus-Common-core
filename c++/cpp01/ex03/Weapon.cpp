/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:45:15 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 21:58:33 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string type ) {
	this->setType(type);
}

Weapon::~Weapon ( void ) {
}

const std::string& Weapon::getType ( void ) {
	return this->type;
}

void Weapon::setType ( std::string newType) {
	this->type = newType;
}

