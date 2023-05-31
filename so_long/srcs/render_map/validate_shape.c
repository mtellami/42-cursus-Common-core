/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_shape.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:51 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 13:47:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_top_bottom(char *line)
{
	while (*line)
	{
		if (*line != '1')
			return (0);
		line++;
	}
	return (1);
}

int	is_closed(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][ft_strlen(map[i]) - 1] != '1')
		{
			map_errors(3);
			return (0);
		}
		i++;
	}
	if (!check_top_bottom(map[0]) || !check_top_bottom(map[i - 1]))
	{
		map_errors(3);
		return (0);
	}
	return (1);
}

int	is_rectangle(char **map)
{
	int	width;
	int	i;

	width = ft_strlen(map[0]);
	i = 0;
	while (map[i])
	{
		if (ft_strlen(map[i]) != width)
		{
			map_errors(3);
			return (0);
		}
		i++;
	}
	return (1);
}

int	validate_shape(char **map)
{
	if (!is_closed(map) || !is_rectangle(map))
		return (0);
	return (1);
}
