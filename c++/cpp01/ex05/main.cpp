/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:12:27 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 10:30:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	std::string input;
    Harl        harl;

	while ( true ) {
        std::cout << "Enter a level: ";
        getline(std::cin, input);
		if (std::cin.eof())
			return 0;
        harl.complain(input);
	}
    return 0;
}
