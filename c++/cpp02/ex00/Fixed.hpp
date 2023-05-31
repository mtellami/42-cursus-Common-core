/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:58:57 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/27 06:07:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	private :

		int fixedPointNumber;
		static const int fractional_bits = 8;

	public :
		
		Fixed ( void );
		Fixed( const Fixed &obj );
    	Fixed& operator=( const Fixed &obj );
		~Fixed ( void );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif