/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 23:12:46 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 01:39:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombieOne("imortal");

    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombieTwo = newZombie("mortal");

    zombieOne.announce();
    zombieTwo->announce();

    std::cout << "Calling randomChump function" << std::endl;
    randomChump("random");

    delete zombieTwo;

    return 0;
}
