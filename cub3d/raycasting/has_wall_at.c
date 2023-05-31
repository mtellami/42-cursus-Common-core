/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_wall_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:53:02 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:47:26 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

int	_out_range(char **map, double x, double y)
{
	int	xi;
	int	yi;
	int	i;

	i = 0;
	while (map[i])
		i++;
	xi = (int)floor(x / TILE_SIZE);
	yi = (int)floor(y / TILE_SIZE);
	return (yi < 0 || yi >= i || xi < 0 || xi >= ft_strlen(map[yi]));
}

int	map_has_wall_at(char **map, double x, double y)
{
	int	i;
	int	j;

	j = (int)floor(x / TILE_SIZE);
	i = (int)floor(y / TILE_SIZE);
	if (_out_range(map, x, y))
		return (OUT_RANGE);
	if (map[i][j] == '0' || map[i][j] == 'O')
		return (SPACE);
	else if (map[i][j] == 'D')
		return (DOOR);
	else if (map[i][j] == 'Z')
		return (ENEMY);
	else
		return (WALL);
}
