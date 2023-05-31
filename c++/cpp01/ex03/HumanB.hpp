/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:43:50 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/26 07:12:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	
	private :

			std::string	_name;
			Weapon		*_weapon;

	public :

			HumanB( std::string name);
			~HumanB( void );

			void attack( void );
			void setWeapon( Weapon& weapon);
};


#endif