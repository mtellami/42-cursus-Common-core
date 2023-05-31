/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:45:24 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 21:40:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook PhoneBook;
	while (true)
	{
		std::string input;
		std::cout << CYAN << "PhoneBook>  " << RESET;
		getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (!input.compare("ADD"))
			PhoneBook.add();
		else if (!input.compare("SEARCH"))
			PhoneBook.search();
		else if (!input.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else
			std::cout << RED << "Please enter a valid operation" << RESET << std::endl
			<< "ADD | SEARCH | EXIT";
		std::cout << std::endl;
	}
	return 0;
}
