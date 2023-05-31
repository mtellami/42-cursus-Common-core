/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_patrol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:13:13 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:27:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	to_right(t_game *so_long, int i, int x, int y)
{
	if (so_long->map->map[x][y + 1] == '0')
	{
		ft_swap(&so_long->map->map[x][y + 1], &so_long->map->map[x][y]);
		so_long->map->enemy[i]->y++;
	}
	else if (so_long->map->map[x][y + 1] == 'P')
		free_exit_bonus(so_long);
	else
		so_long->place[i] = so_long->map->y;
}

void	to_left(t_game *so_long, int i, int x, int y)
{
	if (so_long->map->map[x][y - 1] == '0')
	{
		ft_swap(&so_long->map->map[x][y - 1], &so_long->map->map[x][y]);
		so_long->map->enemy[i]->y--;
	}
	else if (so_long->map->map[x][y - 1] == 'P')
		free_exit_bonus(so_long);
	else
		so_long->place[i] = so_long->map->y * 2;
}

void	enemy_moves(t_game *so_long, int i, int x, int y)
{
	if (so_long->place[i] <= so_long->map->y)
		to_right(so_long, i, x, y);
	else if (so_long->place[i] > so_long->map->y
		&& so_long->place[i] < so_long->map->y * 2)
		to_left(so_long, i, x, y);
	else
		so_long->place[i] = -1;
	so_long->place[i]++;
}

int	enemy_patrol(void *param)
{
	t_game	*so_long;
	int		i;
	int		x;
	int		y;

	so_long = (t_game *)param;
	i = 0;
	mlx_clear_window(so_long->mlx, so_long->win);
	while (so_long->map->enemy[i])
	{
		x = so_long->map->enemy[i]->x;
		y = so_long->map->enemy[i]->y;
		enemy_moves(so_long, i, x, y);
		i++;
	}
	display_bonus(so_long);
	return (1);
}
