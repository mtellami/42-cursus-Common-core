/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:51:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 18:54:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	free_exit(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	free(game->map->player);
	free_map(game->map->map);
	free(game->map);
	free(game);
	exit(0);
	return (1);
}
