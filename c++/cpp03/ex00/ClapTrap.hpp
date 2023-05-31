/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:05:04 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 01:12:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	private :
	
		std::string name;
		size_t hitPoints;
		size_t energyPoints;
		size_t attackDamage;

	public :

		ClapTrap( std::string _name );
		ClapTrap(const ClapTrap &obj);
    	ClapTrap &operator=(const ClapTrap& obj); 
		~ClapTrap( void );
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName( void );
		void setName( std::string newName );
		void setDamage( unsigned int damage );
};

#endif