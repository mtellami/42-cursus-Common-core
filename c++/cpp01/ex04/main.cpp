/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:42:53 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/31 14:42:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main ( int argc, char **argv )
{
	if (argc != 4) {
		 std::cerr << "Usage: ./sed <filename> <to_find> <replace>" << std::endl;
		 return 1;
	} else {
		Sed	sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	return 0;
}
