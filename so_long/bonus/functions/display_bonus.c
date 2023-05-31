/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:17:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 11:35:37 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	display_counter(t_game *so_long)
{
	char	*str;

	str = ft_itoa(so_long->moves);
	mlx_string_put(so_long->mlx, so_long->win, 15, 10, 0xff0000, str);
	free(str);
}

void	display_textures_bonus(t_game *so_long, int x, int y)
{
	char	*path;

	path = textures_path_bonus(so_long, so_long->map->map[x][y]);
	if (!path)
		return ;
	so_long->img = mlx_xpm_file_to_image
		(so_long->mlx, path,
			&so_long->size, &so_long->size);
	if (!so_long->img)
		free_exit_bonus(so_long);
	mlx_put_image_to_window(so_long->mlx, so_long->win,
		so_long->img, y * 50, x * 50);
	mlx_destroy_image(so_long->mlx, so_long->img);
}

void	display_bonus(t_game	*so_long)
{
	int	x;
	int	y;

	x = 0;
	while (so_long->map->map[x])
	{
		y = 0;
		while (so_long->map->map[x][y] != '\n' && so_long->map->map[x][y])
		{
			display_textures_bonus(so_long, x, y);
			y++;
		}
		x++;
	}
	display_counter(so_long);
}
