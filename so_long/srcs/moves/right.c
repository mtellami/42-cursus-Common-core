/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:08:13 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 17:30:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	right_action(t_game *so_long)
{
	ft_swap(&so_long->map->map[so_long->map->player->x]
	[so_long->map->player->y + 1],
		&so_long->map->map[so_long->map->player->x]
	[so_long->map->player->y]);
	so_long->map->player->y++;
	so_long->moves++;
	ft_putnbr(so_long->moves);
	write(1, "\n", 1);
}

void	right(t_game *so_long)
{
	char	**map;
	int		x;
	int		y;

	map = so_long->map->map;
	x = so_long->map->player->x;
	y = so_long->map->player->y;
	if (map[x][y + 1] == '1')
		return ;
	if (map[x][y + 1] == '0')
		right_action(so_long);
	else if (map[x][y + 1] == 'C')
	{
		right_action(so_long);
		map[x][y] = '0';
		so_long->map->c--;
	}
	else if (map[x][y + 1] == 'E')
		if (so_long->map->c == 0)
			exit(0);
}
