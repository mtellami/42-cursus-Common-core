/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:19:07 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/29 03:57:10 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void )
{
	Point a(10, 0);
	Point b(0, 20);
	Point c(20, 20);

	Point p(10, 10);

	if ( bsp( a, b, c, p )) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }
	return 0;
}
