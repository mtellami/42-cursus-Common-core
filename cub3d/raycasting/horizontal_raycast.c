/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horizontal_raycast.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:22:54 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 23:02:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

t_vector	get_horizontal_intercept(t_leet *leet, double rayAngle)
{
	t_vector	intercept;

	intercept.y = floor(leet->ray.player.vector.y / TILE_SIZE) * TILE_SIZE;
	if (_direction(rayAngle, FACING_DOWN))
		intercept.y += TILE_SIZE;
	intercept.x = leet->ray.player.vector.x + (intercept.y
			- leet->ray.player.vector.y) / tan(rayAngle);
	return (intercept);
}

t_vector	get_horizontal_steps(double rayAngle)
{
	t_vector	step;

	step.y = TILE_SIZE;
	if (_direction(rayAngle, FACING_UP))
		step.y *= -1;
	step.x = TILE_SIZE / tan(rayAngle);
	if (_direction(rayAngle, FACING_LEFT) && step.x > 0)
		step.x *= -1;
	if (_direction(rayAngle, FACING_RIGHT) && step.x < 0)
		step.x *= -1;
	return (step);
}

t_vector	horizontal_ray_cast(t_leet *leet, double rayAngle)
{
	t_vector	step;
	t_vector	next_touch;
	double		div;

	div = 0;
	if (_direction(rayAngle, FACING_UP))
		div = -1;
	next_touch = get_horizontal_intercept(leet, rayAngle);
	step = get_horizontal_steps(rayAngle);
	while (1)
	{
		if (map_has_wall_at(leet->ray.map.map,
				next_touch.x, next_touch.y + div))
			return (next_touch);
		else
		{
			next_touch.x += step.x;
			next_touch.y += step.y;
		}
	}
	return (next_touch);
}
