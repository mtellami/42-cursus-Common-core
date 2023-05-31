/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:56:20 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/03 10:45:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->NumberOfContacts = 0;
}

PhoneBook::~PhoneBook(void) {
}

std::string GetInput(std::string data) {
	std::string input;
	std::cout << "\t" << data << ": ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	if (input.empty()) {
		std::cout << RED << "Contact attribute can't be empty" << RESET << std::endl;
		return GetInput(data);
	}
	return input;
}

void PhoneBook::add(void) {
	int	index = this->NumberOfContacts % 8;
	this->Contacts[index].setContact();
	this->NumberOfContacts++;
	std::cout << GREEN << "Contact saved successfully !" << RESET << std::endl;
}

std::string Trunc(std::string str) {
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << std::setw(10);
	return str;
}

int	ValidIndex(std::string str, int NumberOfContacts) {
	int size = str.length();
	for (int i = 0; i < size; i++)
		if (!isnumber(str[i]))
			return 0;
	if (str.length() > 9)
		return 0;
	int nbr = std::stoi(str);
	if (nbr < 1 || nbr > NumberOfContacts || nbr > 8)
		return 0;
	return 1;
}

void PhoneBook::ListPhoneBook( void ) {
	int contacts = this->NumberOfContacts;
	if (contacts > 8)
		contacts = 8;
	std::cout << UNDERLINE;
	std::cout << Trunc("index") << "|" << Trunc("first name") << "|"
		<< Trunc("lastname") << "|" << Trunc("nickname") << "|" << std::endl;
	for (int i = 0; i < contacts; i++) {
		this->Contacts[i].ListOnTable();
	}
	std::cout << RESET;
}

void PhoneBook::search(void) {
	if (!this->NumberOfContacts) {
		std::cout << "Contact list is empty" << std::endl;
		return ;
	}
	this->ListPhoneBook();
	std::string input;
	std::cout << std::endl << "For more contact information, specifie the contact index: ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	while (input.empty() || !ValidIndex(input, this->NumberOfContacts)) {
		std::cout << RED << "Please enter a valid number : " << RESET;
		getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
	this->Contacts[stol(input) - 1].ListContact();
}
