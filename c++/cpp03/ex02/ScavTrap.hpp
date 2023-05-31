/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:25:53 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/29 06:55:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private :
	
		// ScavTrap ( void );

	public :
	
		ScavTrap( std::string _name );
		ScavTrap(const ScavTrap &obj);
    	ScavTrap &operator=(const ScavTrap& obj); 
		~ScavTrap( void );
	
		void attack(const std::string& target);
		void guardGate( void );
};

#endif