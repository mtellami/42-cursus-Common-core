/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:54:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:51:56 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

int	_offset(t_leet *leet, int i, int top, char v)
{
	int	offset;
	int	wall_height;

	wall_height = wall_height(leet, i);
	if (v == 'X')
	{
		if (leet->ray.player.rays[i].hit_side == HORIZONTAL_HIT)
			offset = (int)leet->ray.player.rays[i].wall_hit.x % TILE_SIZE;
		else
			offset = (int)leet->ray.player.rays[i].wall_hit.y % TILE_SIZE;
	}
	else
		offset = (top + (wall_height / 2) - (WINDOW_HEIGHT / 2))
			* ((double)TEXTURE_DIMENTION / wall_height);
	return (offset);
}

void	horizontal_render(t_leet *leet, int i, int top, t_vector offset)
{
	if (_direction(leet->ray.player.rays[i].angle, FACING_UP))
		ft_mlx_pixel_put(&leet->ray.img, i, top,
			_pixel_color(&leet->ray.map._north, offset.x, offset.y));
	else
		ft_mlx_pixel_put(&leet->ray.img, i, top,
			_pixel_color(&leet->ray.map._south, offset.x, offset.y));
}

void	vertical_render(t_leet *leet, int i, int top, t_vector offset)
{
	if (_direction(leet->ray.player.rays[i].angle, FACING_RIGHT))
		ft_mlx_pixel_put(&leet->ray.img, i, top,
			_pixel_color(&leet->ray.map._west, offset.x, offset.y));
	else
		ft_mlx_pixel_put(&leet->ray.img, i, top,
			_pixel_color(&leet->ray.map._east, offset.x, offset.y));
}

void	render_wall(t_leet *leet, int top, int bottom, int i)
{
	t_vector	offset;

	offset.x = _offset(leet, i, top, 'X');
	while (top < bottom)
	{
		offset.y = _offset(leet, i, top, 'Y');
		if (leet->ray.player.rays[i].hit_content == DOOR)
			ft_mlx_pixel_put(&leet->ray.img, i, top,
				_pixel_color(&leet->ray.map._door, offset.x, offset.y));
		else if (leet->ray.player.rays[i].hit_content == ENEMY)
			ft_mlx_pixel_put(&leet->ray.img, i, top,
				_pixel_color(&leet->ray.map._enemy, offset.x, offset.y));
		if (leet->ray.player.rays[i].hit_side == HORIZONTAL_HIT)
			horizontal_render(leet, i, top, offset);
		else
			vertical_render(leet, i, top, offset);
		top++;
	}
}
