/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:28:37 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/30 00:43:54 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::string str = argv[i];
			for (int j = 0; argv[i][j]; j++)
				str[j] = toupper(argv[i][j]);
			std::cout << str;
		}
	} else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
