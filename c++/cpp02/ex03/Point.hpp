/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:22:02 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/28 22:16:26 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

	private :

		Fixed const x;
		Fixed const y;

	public :

		Point( void );
    	Point( const float _x, const float _y );
    	Point( const Point &obj );
    	~Point( void );

    	Point&  operator=( const Point &obj );

    	Fixed getX( void ) const ;
    	Fixed getY( void ) const ;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif