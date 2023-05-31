/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:26:13 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 21:56:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv) {
	if (argc == 1) {
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	} else if (argc != 2) {
		std::cerr << "Error: too many arguments" << std::endl;
		return 1;
	}

	try {
		std::string infile = argv[1];
		BitcoinExchange bitcoin;
		bitcoin.exchange(infile);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
