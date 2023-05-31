/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:37:58 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:49:37 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

void	ft_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	render_ceil(t_leet *leet, int top_pixel, int i)
{
	int	j;

	j = 0;
	while (j < top_pixel)
		ft_mlx_pixel_put(&leet->ray.img, i, j++,
			_rgb_color(leet->ray.map._ceil));
}

void	render_floor(t_leet *leet, int bottom_pixel, int i)
{
	int	j;

	j = bottom_pixel;
	while (j < WINDOW_HEIGHT)
		ft_mlx_pixel_put(&leet->ray.img, i, j++,
			_rgb_color(leet->ray.map._floor));
}

void	animated_sprite(t_leet *leet)
{
	leet->ray.map._enemy = leet->ray.map.fire[leet->ray.player.frame++];
	if (leet->ray.player.frame > 8)
		leet->ray.player.frame = 0;
}

void	render(t_leet *leet)
{
	int	top_pixel;
	int	bottom_pixel;
	int	i;

	leet->ray.img.img = mlx_new_image(leet->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	if (!leet->ray.img.img)
		error_("fail creating mlx image", 0, ERROR);
	leet->ray.img.addr = mlx_get_data_addr(leet->ray.img.img,
			&leet->ray.img.bits_per_pixel,
			&leet->ray.img.line_length, &leet->ray.img.endian);
	i = 0;
	animated_sprite(leet);
	while (i < NUM_RAYS)
	{
		top_pixel = wall_top_pixel(leet, i);
		bottom_pixel = wall_bottom_pixel(leet, i);
		render_ceil(leet, top_pixel, i);
		render_wall(leet, top_pixel, bottom_pixel, i);
		render_floor(leet, bottom_pixel, i);
		i++;
	}
	mlx_put_image_to_window(leet->mlx, leet->window, leet->ray.img.img, 0, 0);
	free(leet->ray.player.rays);
}
