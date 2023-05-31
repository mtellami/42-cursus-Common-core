/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:17:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/22 08:34:42 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_textures(t_game *so_long, int x, int y)
{
	char	*path;

	path = textures_path(so_long->map->map[x][y]);
	if (!path)
		return ;
	so_long->img = mlx_xpm_file_to_image
		(so_long->mlx, path,
			&so_long->size, &so_long->size);
	mlx_put_image_to_window(so_long->mlx, so_long->win,
		so_long->img, y * 50, x * 50);
	mlx_destroy_image(so_long->mlx, so_long->img);
}

void	display(t_game	*so_long)
{
	int	x;
	int	y;

	x = 0;
	while (so_long->map->map[x])
	{
		y = 0;
		while (so_long->map->map[x][y] != '\n' && so_long->map->map[x][y])
		{
			display_textures(so_long, x, y);
			y++;
		}
		x++;
	}
}
