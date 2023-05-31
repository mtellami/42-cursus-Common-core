/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_up_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:49:20 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:13:54 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_game	*setting_up_bonus(t_map *map)
{
	t_game	*so_long;

	so_long = malloc(sizeof(t_game));
	if (!so_long)
	{
		function_error(3);
		return (NULL);
	}
	so_long->mlx = mlx_init();
	so_long->win = mlx_new_window
		(so_long->mlx, map->y * 50,
			map->x * 50, "so_long");
	so_long->map = map;
	so_long->size = 50;
	so_long->moves = 0;
	so_long->place = malloc(sizeof(int)
			* element_count(so_long->map->map, 'X'));
	return (so_long);
}
