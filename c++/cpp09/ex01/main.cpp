/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:55:55 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/28 12:18:43 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr <<  "Usage: ./RPN \"`num` `num` `operation` ...\"" << std::endl;
		return 1;
	}

	RPN calculator;
	std::string input = argv[1];

	calculator.calc(input);

	return 0;
}
