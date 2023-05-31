/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_path_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:18:13 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 11:12:24 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*player_sprite(t_game *game)
{
	static int	i;
	char		*path;

	path = NULL;
	if (i <= 1)
		path = player_dir_1(game);
	else if (i == 2)
		path = player_dir_2(game);
	else if (i == 3)
		path = "textures/player_0.xpm";
	else
	{
		path = player_dir_2(game);
		i = -1;
	}
	i++;
	return (path);
}

char	*textures_path_bonus(t_game *so_long, char c)
{
	char	*path;

	path = NULL;
	if (c == '0')
		path = "textures/empty.xpm";
	else if (c == '1')
		path = "textures/wall.xpm";
	else if (c == 'P')
		path = player_sprite(so_long);
	else if (c == 'C')
		path = "textures/collect.xpm";
	else if (c == 'E')
		path = "textures/exit.xpm";
	else if (c == 'X')
		path = "textures/enemy.xpm";
	return (path);
}
