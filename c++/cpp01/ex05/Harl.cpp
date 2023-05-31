/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:12:28 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 10:28:15 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Default constructor
Harl::Harl( void ) {
}

// Destructor
Harl::~Harl( void ) {
}

// Member function
void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 4;
	while (i--) {
		if (!levels[i].compare(level))
        	(this->*funcs[i])();
	}
}
