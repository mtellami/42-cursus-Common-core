/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:32:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:00:28 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public :

		Ice( void );
		Ice( const Ice &obj );
		Ice& operator=( const Ice &obj );
		~Ice( void );

		AMateria* clone( void ) const;
		void use(ICharacter &target);
};

#endif