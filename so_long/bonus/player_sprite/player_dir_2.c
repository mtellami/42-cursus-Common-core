/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_dir_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:47:10 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*player_dir_2(t_game *game)
{
	char	*path;

	path = NULL;
	if (game->map->dir == 's')
		path = "textures/player_down_2.xpm";
	else if (game->map->dir == 'd')
		path = "textures/player_right_2.xpm";
	else if (game->map->dir == 'w')
		path = "textures/player_up_2.xpm";
	else if (game->map->dir == 'a')
		path = "textures/player_left_2.xpm";
	return (path);
}
