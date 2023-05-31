/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:44:09 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 09:44:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	private :

			std::string type;

	public :

		Weapon( std::string type );
		~Weapon( void );

		const std::string& getType( void ); 
		void setType( std::string newType );
};

#endif