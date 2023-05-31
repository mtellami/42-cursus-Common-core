/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:51:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:10:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	free_enemy(t_pos **enemy)
{
	int	i;

	i = 0;
	while (enemy[i])
	{
		free(enemy[i]);
		i++;
	}
	free(enemy);
}

int	free_exit_bonus(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	free(game->map->player);
	free_map(game->map->map);
	free_enemy(game->map->enemy);
	free(game->map);
	free(game->place);
	free(game);
	exit(0);
	return (1);
}
