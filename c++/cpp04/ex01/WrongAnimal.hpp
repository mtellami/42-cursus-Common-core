/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:17:18 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 04:07:12 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	protected :

		std::string _type;

	public :
	
		WrongAnimal( void );
		WrongAnimal( std::string type);
		WrongAnimal( const WrongAnimal &obj );
		WrongAnimal& operator=( const WrongAnimal &obj);
		virtual ~WrongAnimal( void );

		void makeSound( void ) const;
		std::string getType( void );
};

#endif