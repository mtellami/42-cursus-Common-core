/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:42:22 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 17:53:10 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter {

	private :

		std::string _name;
		AMateria *_inventory[4];
		Character( void );

	public :

		Character( std::string const &name );
		Character( const Character &obj );
		Character& operator=( const Character &obj );
		~Character( void );

		std::string const & getName( void ) const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
};

#endif