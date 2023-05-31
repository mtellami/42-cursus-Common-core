/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:45:39 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 09:04:17 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	protected :

		std::string type;

	public :

		Animal( void );
		Animal( std::string _type);
		Animal( const Animal &obj);
		Animal &operator=( const Animal &obj );
		virtual ~Animal( void );

		virtual void makeSound( void ) const;
		std::string getType( void ) const;
};

#endif