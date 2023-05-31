/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:32:44 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 02:00:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	
	public :

		Cure( void );
		Cure( const Cure &obj );
		Cure& operator=( const Cure &obj );
		~Cure( void );

		AMateria* clone( void ) const;
		void use(ICharacter &target);
};

#endif