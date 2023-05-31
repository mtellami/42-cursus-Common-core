/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _angle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:49:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:46:28 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

double	_angle(double angle)
{
	angle = remainder(angle, M_PI * 2);
	if (angle < 0)
		angle += M_PI * 2;
	return (angle);
}

double	_distance(t_vector start, t_vector end)
{
	return (sqrt((end.x - start.x) * (end.x - start.x)
			+ (end.y - start.y) * (end.y - start.y)));
}
