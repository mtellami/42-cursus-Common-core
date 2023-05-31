/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 23:17:07 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 17:57:32 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private : 
	
		std::string name;

	public :

		Zombie ( std::string _name );
		~Zombie ( void );

		void announce( void );
};

Zombie* newZombie( std::string _name );
void randomChump( std::string _name );

#endif