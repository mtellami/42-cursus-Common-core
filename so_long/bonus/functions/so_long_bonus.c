/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:12:28 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 11:39:45 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int ac, char **av)
{
	t_game	*so_long;
	t_map	*map;

	if (ac != 2)
	{
		function_error(1);
		return (0);
	}
	map = map_render_bonus(av[1]);
	if (!map)
		return (0);
	so_long = setting_up_bonus(map);
	if (!so_long)
		return (0);
	display_bonus(so_long);
	mlx_key_hook(so_long->win, &event_bonus, so_long);
	mlx_hook(so_long->win, 17, 0, &free_exit_bonus, so_long);
	mlx_loop_hook(so_long->mlx, &enemy_patrol, so_long);
	mlx_loop(so_long->mlx);
}
