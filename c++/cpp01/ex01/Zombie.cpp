/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:16:08 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 01:50:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie( void ) {
	std::cout << "Zombie " << this->name << " is created" << std::endl;
}

// Destructor
Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->name << " has been destroyed" << std::endl;
}

// member function
void Zombie::announce ( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::naming ( std::string _name ) {
	this->name = _name;
}
