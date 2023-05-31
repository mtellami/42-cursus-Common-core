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
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

	Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for ( int i = 0;i < 4; i++ ) {
		animals[i]->makeSound();
	}

    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
