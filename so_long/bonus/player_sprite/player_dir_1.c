/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_dir_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:46:57 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*player_dir_1(t_game *game)
{
	char	*path;

	path = NULL;
	if (game->map->dir == 's')
		path = "textures/player_down_1.xpm";
	else if (game->map->dir == 'd')
		path = "textures/player_right_1.xpm";
	else if (game->map->dir == 'w')
		path = "textures/player_up_1.xpm";
	else if (game->map->dir == 'a')
		path = "textures/player_left_1.xpm";
	return (path);
}
