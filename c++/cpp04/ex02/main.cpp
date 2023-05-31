	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:56:27 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/29 12:55:38 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{ 
	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for ( int i = 0;i < 4; i++ ) {
		animals[i]->makeSound();
	}

    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
