/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:16:56 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 11:04:44 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructor
Harl::Harl ( void ) {
}

// Destructor
Harl::~Harl ( void ) {
}

// Member function
void Harl::debug ( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info ( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning ( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
	std::cout << std::endl;
}

void Harl::error ( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}


void Harl::complain ( std::string level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 4;
	while (i--)
		if (!levels[i].compare(level))
			break ;

	switch (i) {
	case 0:
        this->debug();
    case 1:
        this->info();
    case 2:
        this->warning();
    case 3:
        this->error();
		break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
