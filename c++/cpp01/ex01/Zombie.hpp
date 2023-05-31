/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:16:42 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/31 01:34:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public :

			Zombie ( void );
			~Zombie ( void );

			void announce( void );
			void naming( std::string _name );

	private : 

		std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif