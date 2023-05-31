/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:56:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 01:46:02 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int	NumberOfZombies = 3;
	std::string _name = "imortal";

	std::cout << "Creating " << NumberOfZombies << " Zombies with `"
		<< _name << "` name" << std::endl;

	Zombie *Zombies = zombieHorde(NumberOfZombies, _name);

	std::cout << "Announce from zombies :" << std::endl;
	for (int i = 0; i < NumberOfZombies; i++)
		Zombies[i].announce();

	delete [] Zombies;

	return 0;
}
