/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:32:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 11:56:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc < 2) {
		std::cerr << "Usage: ./PmergeMe `num` `num` `num` ..." << std::endl;
		return 1;
	}
	PmergeMe algo;

	algo.parse(argc, argv);
	algo.sort(argc, argv);

	return 0;
}
