/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:16:54 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 11:06:45 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( int argc, char **argv )
{
	if (argc != 2) {
        std::cerr << "Usage: ./harlFilter \"level\"" <<std::endl;
		return 1;
	}
    std::string input = argv[1];
    Harl harl;

    harl.complain(input);

    return 0;
}
