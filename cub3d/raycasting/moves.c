/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:49:07 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:48:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

void	_rotate(t_leet *leet, int sign)
{
	leet->ray.player.angle = _angle(leet->ray.player.angle
			+ (ROTATE_SPEED / 360 * M_PI * 2 * sign));
}

void	_move(t_leet *leet, double angle, int sign)
{
	double	new_x;
	double	new_y;

	new_x = leet->ray.player.vector.x + (cos(angle) * MOVE_SPEED * sign);
	new_y = leet->ray.player.vector.y + (sin(angle) * MOVE_SPEED * sign);
	if (!map_has_wall_at(leet->ray.map.map, new_x, new_y))
	{
		leet->ray.player.vector.x = new_x;
		leet->ray.player.vector.y = new_y;
	}
}
