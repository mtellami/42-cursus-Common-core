/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:10:09 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:39 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	up_action(t_game *so_long)
{
	ft_swap(&so_long->map->map[so_long->map->player->x - 1]
	[so_long->map->player->y],
		&so_long->map->map[so_long->map->player->x]
	[so_long->map->player->y]);
	so_long->map->player->x--;
	so_long->moves++;
	so_long->map->dir = 'w';
	ft_putnbr(so_long->moves);
	write(1, "\n", 1);
}

void	up_bonus(t_game *so_long)
{
	char	**map;
	int		x;
	int		y;

	map = so_long->map->map;
	x = so_long->map->player->x;
	y = so_long->map->player->y;
	if (map[x - 1][y] == '1')
		return ;
	if (map[x - 1][y] == '0')
		up_action(so_long);
	else if (map[x - 1][y] == 'C')
	{
		up_action(so_long);
		map[x][y] = '0';
		so_long->map->c--;
	}
	else if (map[x - 1][y] == 'X')
		free_exit_bonus(so_long);
	else if (map[x - 1][y] == 'E')
		if (so_long->map->c == 0)
			exit(0);
}
