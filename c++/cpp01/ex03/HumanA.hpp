/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:43:07 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/26 07:31:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	
	private :

			std::string	_name;
			Weapon&		_weapon;

	public :

			HumanA( std::string name, Weapon& weapon);
			~HumanA( void );

			void attack( void );
};

#endif