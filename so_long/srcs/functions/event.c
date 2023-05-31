/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:08:19 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 18:56:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	event(int key, void	*param)
{
	t_game	*game;

	game = (t_game *)param;
	if (key == 126)
		up(game);
	else if (key == 125)
		down(game);
	else if (key == 124)
		right(game);
	else if (key == 123)
		left(game);
	else if (key == 53)
		free_exit(game);
	mlx_clear_window(game->mlx, game->win);
	display(game);
	return (0);
}
