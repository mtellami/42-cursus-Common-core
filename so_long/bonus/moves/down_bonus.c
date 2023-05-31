/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:23 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	down_action(t_game *so_long)
{
	ft_swap(&so_long->map->map[so_long->map->player->x + 1]
	[so_long->map->player->y],
		&so_long->map->map[so_long->map->player->x]
	[so_long->map->player->y]);
	so_long->map->player->x++;
	so_long->moves++;
	so_long->map->dir = 's';
	ft_putnbr(so_long->moves);
	write(1, "\n", 1);
}

void	down_bonus(t_game *so_long)
{
	char	**map;
	int		x;
	int		y;

	map = so_long->map->map;
	x = so_long->map->player->x;
	y = so_long->map->player->y;
	if (map[x + 1][y] == '1')
		return ;
	if (map[x + 1][y] == '0')
		down_action(so_long);
	else if (map[x + 1][y] == 'C')
	{
		down_action(so_long);
		map[x][y] = '0';
		so_long->map->c--;
	}
	else if (map[x + 1][y] == 'X')
		free_exit_bonus(so_long);
	else if (map[x + 1][y] == 'E')
		if (so_long->map->c == 0)
			exit(0);
}
