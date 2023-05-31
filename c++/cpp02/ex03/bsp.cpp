/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:22:15 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/01 17:23:41 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float _abs ( float num ) {
	return num < 0 ? -num : num;
}

static float area ( Point const p1, Point const p2, Point const p3 ) {
	float _vx = p2.getX().toFloat() - p1.getX().toFloat();
    float _vy = p2.getY().toFloat() - p1.getY().toFloat();
    float _wx = p3.getX().toFloat() - p1.getX().toFloat();
    float _wy = p3.getY().toFloat() - p1.getY().toFloat();
    return _abs(_vx * _wy - _vy * _wx) / 2.0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float ta = area(a, b, c);
	float _ta1 = area(a, b, point);
	float _ta2 = area(b, c, point);
	float _ta3 = area(a, c, point);
	if (!_ta1 || !_ta2 || !_ta3)
		return false;
	return (ta == _ta1 + _ta2 + _ta3);
}
