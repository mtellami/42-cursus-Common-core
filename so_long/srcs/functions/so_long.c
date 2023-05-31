/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:17:37 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/22 09:12:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	*so_long;
	t_map	*map;

	if (ac != 2)
	{
		function_error(1);
		return (0);
	}
	map = map_render(av[1]);
	if (!map)
		return (0);
	so_long = setting_up(map);
	if (!so_long)
		return (0);
	display(so_long);
	mlx_key_hook(so_long->win, &event, so_long);
	mlx_hook(so_long->win, 17, 0, free_exit, so_long);
	mlx_loop(so_long->mlx);
}
