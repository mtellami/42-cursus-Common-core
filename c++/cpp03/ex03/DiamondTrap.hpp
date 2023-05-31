/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 08:25:29 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 00:31:55 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private :

		DiamondTrap( void );
		std::string name;

	public :

		DiamondTrap( std::string _name );
		DiamondTrap(const DiamondTrap &obj);
    	DiamondTrap &operator=(const DiamondTrap& obj); 
		~DiamondTrap( void );

  		using   ScavTrap::attack;

		void    whoAmI( void );
};

#endif