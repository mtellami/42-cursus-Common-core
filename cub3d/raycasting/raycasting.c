/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:37:34 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 23:01:41 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

void	set_horizontal_hit(t_leet *leet, t_ray *ray,
	t_vector hit, double distance)
{
	double	div;

	div = 0;
	ray->wall_hit = hit;
	ray->distance = distance;
	ray->hit_side = HORIZONTAL_HIT;
	if (_direction(ray->angle, FACING_UP))
		div = -1;
	ray->hit_content = map_has_wall_at(leet->ray.map.map,
			ray->wall_hit.x, ray->wall_hit.y + div);
}

void	set_vertical_hit(t_leet *leet, t_ray *ray,
	t_vector hit, double distance)
{
	double	div;

	div = 0;
	ray->wall_hit = hit;
	ray->distance = distance;
	ray->hit_side = VERTICAL_HIT;
	if (_direction(ray->angle, FACING_LEFT))
		div = -1;
	ray->hit_content = map_has_wall_at(leet->ray.map.map,
			ray->wall_hit.x + div, ray->wall_hit.y);
}

void	setup_ray(t_leet *leet, t_ray *ray,
	t_vector horizontal_hit, t_vector vertical_hit)
{
	double	horz_hit_distance;
	double	vert_hit_distance;

	horz_hit_distance = _distance(leet->ray.player.vector, horizontal_hit);
	vert_hit_distance = _distance(leet->ray.player.vector, vertical_hit);
	if (vert_hit_distance < horz_hit_distance)
		set_vertical_hit(leet, ray, vertical_hit, vert_hit_distance);
	else
		set_horizontal_hit(leet, ray, horizontal_hit, horz_hit_distance);
}

t_ray	cast_ray(t_leet *leet, double ray_angle)
{
	t_ray		ray;
	t_vector	horizontal_hit;
	t_vector	vertical_hit;

	ray.angle = _angle(ray_angle);
	horizontal_hit = horizontal_raycast(leet, ray_angle);
	vertical_hit = vertical_raycast(leet, ray_angle);
	setup_ray(leet, &ray, horizontal_hit, vertical_hit);
	return (ray);
}

void	raycasting(t_leet *leet)
{
	double	ray_angle;
	int		i;

	ray_angle = leet->ray.player.angle - (leet->ray.player.fov / 2);
	leet->ray.player.rays = malloc(sizeof(t_ray) * NUM_RAYS);
	if (!leet->ray.player.rays)
		exit(1);
	i = 0;
	while (i < NUM_RAYS)
	{
		ray_angle = _angle(ray_angle);
		leet->ray.player.rays[i] = cast_ray(leet, ray_angle);
		ray_angle += leet->ray.player.fov / NUM_RAYS;
		i++;
	}
}
