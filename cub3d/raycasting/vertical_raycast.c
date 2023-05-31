/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertical_raycast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:52:20 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:51:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

t_vector	get_vertical_intercept(tleet *leet, double rayAngle)
{
	t_vector	intercept;

	intercept.x = floor(leet->ray.player.vector.x / TILE_SIZE) * TILE_SIZE;
	if (_direction(rayAngle, FACING_RIGHT))
		intercept.x += TILE_SIZE;
	intercept.y = leet->ray.player.vector.y
		+ (intercept.x - leet->ray.player.vector.x)
		* tan(rayAngle);
	return (intercept);
}

t_vector	get_vertical_steps(double rayAngle)
{
	t_vector	step;

	step.x = TILE_SIZE;
	if (_direction(rayAngle, FACING_LEFT))
		step.x *= -1;
	step.y = TILE_SIZE * tan(rayAngle);
	if (_direction(rayAngle, FACING_UP) && step.y > 0)
		step.y *= -1;
	if (_direction(rayAngle, FACING_DOWN) && step.y < 0)
		step.y *= -1;
	return (step);
}

t_vector	vertical_ray_cast(t_leet *leet, double rayAngle)
{
	t_vector	step;
	t_vector	next_touch;
	double		div;

	div = 0;
	if (_direction(rayAngle, FACING_LEFT))
		div = -1;
	next_touch = get_vertical_intercept(leet, rayAngle);
	step = get_vertical_steps(rayAngle);
	while (1)
	{
		if (map_has_wall_at(leet->ray.map.map,
				next_touch.x + div, next_touch.y))
			return (next_touch);
		else
		{
			next_touch.x += step.x;
			next_touch.y += step.y;
		}
	}
	return (next_touch);
}
