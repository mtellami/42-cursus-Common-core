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
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Type :" << j->getType() << std::endl;
	std::cout << "Type :" << i->getType() << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *ptr = new WrongCat();
	std::cout << "Type :" << ptr->getType() << std::endl;
	ptr->makeSound();

	return 0;
}
