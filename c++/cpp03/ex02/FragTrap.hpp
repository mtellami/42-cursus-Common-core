/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 07:17:13 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/05 23:45:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

	private :

		FragTrap( void );

	public :

		FragTrap( std::string _name );
		FragTrap(const FragTrap &obj);
    	FragTrap &operator=(const FragTrap& obj); 
		~FragTrap( void );

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif