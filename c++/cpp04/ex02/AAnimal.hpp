/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:45:39 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 04:27:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {

	protected :

		std::string type;

	public :

		AAnimal( void );
		AAnimal( std::string _type);
		AAnimal( const AAnimal &obj);
		AAnimal &operator=( const AAnimal &obj );
		virtual ~AAnimal( void );

		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
};

#endif