/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:33:20 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 19:37:55 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_colum(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

t_map	*map_render(char	*path)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
	{
		function_error(3);
		return (NULL);
	}
	map->map = map_validate(path);
	map->x = map_colum(map->map);
	map->y = ft_strlen(map->map[0]);
	map->c = element_count(map->map, 'C');
	map->player = element_position(map->map, 'P');
	return (map);
}
