/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 23:16:31 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 17:58:01 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Parameterized constructor
Zombie::Zombie( std::string _name ) : name(_name) {
	std::cout << "Zombie " << name << " is created" << std::endl;
}

// Destructor
Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->name << " has been destroyed" << std::endl;
}


// Member function
void Zombie::announce ( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
