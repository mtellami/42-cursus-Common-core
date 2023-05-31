/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_pixel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:37:59 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:50:24 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

int	wall_height(t_leet *leet, int i)
{
	int		wall_height;
	double	perp_distance;
	double	distance_proj_plane;

	perp_distance = leet->ray.player.rays[i].distance
		* cos(leet->ray.player.rays[i].angle - leet->ray.player.angle);
	distance_proj_plane = (WINDOW_WIDTH / 2) / tan(leet->ray.player.fov / 2);
	wall_height = (int)((TILE_SIZE / perp_distance) * distance_proj_plane);
	return (wall_height);
}

int	wall_top_pixel(t_leet *leet, int i)
{
	int		wall_top_pixel;

	leet->ray.player.rays[i].wall_height = wall_height(leet, i);
	if (leet->ray.player.rays[i].wall_height > WINDOW_HEIGHT)
		leet->ray.player.rays[i].wall_height = WINDOW_HEIGHT;
	wall_top_pixel = (WINDOW_HEIGHT / 2)
		- (leet->ray.player.rays[i].wall_height / 2);
	if (wall_top_pixel < 0 || wall_top_pixel > WINDOW_HEIGHT / 2)
			wall_top_pixel = 0;
	return (wall_top_pixel);
}

int	wall_bottom_pixel(t_leet *leet, int i)
{
	int		wall_bottom_pixel;

	wall_bottom_pixel = (WINDOW_HEIGHT / 2)
		+ (leet->ray.player.rays[i].wall_height / 2);
	if (wall_bottom_pixel > WINDOW_HEIGHT
		|| wall_bottom_pixel < WINDOW_HEIGHT / 2)
		wall_bottom_pixel = WINDOW_HEIGHT;
	return (wall_bottom_pixel);
}
