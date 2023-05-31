/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:53:50 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 22:53:37 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
		std::cout << "Invalid argument" << std::endl;
		return 1;
	}

	ScalarConverter::convert( argv[1] );

    return 0;
}
