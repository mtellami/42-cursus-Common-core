/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:46:25 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 02:21:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	
	private :

		Brain *brain;

	public :
	
		Dog( void );
		Dog( const Dog &obj);
		Dog &operator=( const Dog &obj );
		~Dog( void );

		void makeSound( void ) const;
};

#endif