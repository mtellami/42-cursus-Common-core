/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:08:19 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 11:36:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	event_bonus(int key, void	*param)
{
	t_game	*game;

	game = (t_game *)param;
	if (key == 126)
		up_bonus(game);
	else if (key == 125)
		down_bonus(game);
	else if (key == 124)
		right_bonus(game);
	else if (key == 123)
		left_bonus(game);
	else if (key == 53)
		free_exit_bonus(game);
	mlx_clear_window(game->mlx, game->win);
	display_bonus(game);
	return (0);
}
