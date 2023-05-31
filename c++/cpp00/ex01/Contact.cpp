/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:45:49 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/03 10:45:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

// Constructor
Contact::Contact(void){
}

// Destructor
Contact::~Contact(void) {
}

void Contact::ListContact( void ) {
	std::cout << "First name : " << this->FirstName << std::endl;
	std::cout << "Last name : " << this->LastName << std::endl;
	std::cout << "Nickname : " << this->Nickname << std::endl;
	std::cout << "Phone number : " << this->PhoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->DarkestSecret << std::endl;
}

void Contact::ListOnTable( void ) {
	std::cout << Trunc(std::to_string(this->index)) << "|"
		<< Trunc(this->FirstName) << "|"
		<< Trunc(this->LastName) << "|"
		<< Trunc(this->Nickname) << "|" << std::endl;
}

void Contact::setContact( void ) {
	this->index = index + 1;
	std::cout << "Add new contact" << std::endl;
	this->FirstName = GetInput("FirstName");
	this->LastName = GetInput("LastName");
	this->Nickname = GetInput("Nickname");
	this->PhoneNumber = GetInput("PhoneNumber");
	this->DarkestSecret = GetInput("DarkestSecret");
}
