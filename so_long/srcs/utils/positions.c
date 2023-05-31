/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:55:25 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 17:01:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_pos	**make_pos_array(int count)
{
	t_pos	**elem;
	int		i;

	elem = malloc(sizeof(t_pos *) * (count + 1));
	i = 0;
	while (i < count)
	{
		elem[i] = malloc(sizeof(t_pos));
		i++;
	}
	elem[i] = NULL;
	return (elem);
}

void	get_position(t_pos **elem, char **map, char c)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == c)
			{
				elem[i]->x = x;
				elem[i]->y = y;
				i++;
			}
			y++;
		}
		x++;
	}
}

t_pos	**positions(char **map, char c)
{
	t_pos	**elem;
	int		count;

	count = element_count(map, c);
	elem = make_pos_array(count);
	get_position(elem, map, c);
	return (elem);
}
