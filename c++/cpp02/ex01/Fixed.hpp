/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 07:20:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/04 01:16:01 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private :

		int fixedPointNumber;
		static const int fractionalBits = 8;

	public :
		
		Fixed( void );
		Fixed( const int n);
		Fixed( const float n);
		Fixed( const Fixed &obj );
    	Fixed& operator=( const Fixed &obj );
		~Fixed( void );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
		float toFloat( void ) const;
		int toInt( void ) const;
	
};

std::ostream& operator<<( std::ostream &os, Fixed const &obj );
	
#endif