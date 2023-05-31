/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:07:47 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/08 01:59:46 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:

		std::string _type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria &obj );
		AMateria& operator=( const AMateria &obj );
		virtual ~AMateria( void );

		std::string const & getType() const;

		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );
};

#endif