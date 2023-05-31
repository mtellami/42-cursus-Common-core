/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:19:20 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 01:29:29 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *Zombies;

	try {
		Zombies = new Zombie[N];
	} catch (std::bad_alloc) {
		std::cerr << "Error: fail allocate zombies" << std::endl;
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < N; i++)
		Zombies[i].naming(name);

	return Zombies;
}
