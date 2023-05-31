/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:22:17 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/28 22:05:37 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private :

		int fixedPointNumber;
		static const int fractional_bits = 8;

	public :
		
		Fixed ( void );
		Fixed ( const int n);
		Fixed ( const float n);
		Fixed ( const Fixed &obj );
    	Fixed& operator=( const Fixed &obj );
		~Fixed ( void );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
		float toFloat( void ) const;
		int toInt( void ) const;

		bool    operator>( const Fixed &obj ) const ;
    	bool    operator<( const Fixed &obj ) const ;
    	bool    operator>=( const Fixed &obj ) const ;
    	bool    operator<=( const Fixed &obj ) const ;
    	bool    operator==( const Fixed &obj ) const ;
    	bool    operator!=( const Fixed &obj ) const ;
	
    	Fixed   operator+( const Fixed &obj ) const ;
    	Fixed   operator-( const Fixed &obj ) const ;
    	Fixed   operator*( const Fixed &obj ) const ;
    	Fixed   operator/( const Fixed &obj ) const ;
	
		// pre-increment/decrement
    	Fixed   operator++( int );
    	Fixed   operator--( int );
	
		// post-increment/decrement
    	Fixed&  operator++( void );
    	Fixed&  operator--( void );
	
    	static Fixed& min( Fixed &a, Fixed &b );
    	static const Fixed& min( const Fixed &a, const Fixed &b );

    	static Fixed& max( Fixed &a, Fixed &b );
    	static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream& operator<<( std::ostream &os, Fixed const &obj );
	
#endif
