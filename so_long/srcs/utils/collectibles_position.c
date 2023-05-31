/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectibles_position.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:55:25 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 17:44:01 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_pos	**make_pos_array(int count)
{
	t_pos	**c;
	int		i;

	c = malloc(sizeof(t_pos *) * (count + 1));
	i = 0;
	while (i < count)
	{
		c[i] = malloc(sizeof(t_pos));
		i++;
	}
	c[i] = NULL;
	return (c);
}

void	get_position(t_pos **c, char **map)
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
			if (map[x][y] == 'C')
			{
				c[i]->x = x;
				c[i]->y = y;
				i++;
			}
			y++;
		}
		x++;
	}
}

t_pos	**collectibles_position(char **map)
{
	t_pos	**c;
	int		count;

	count = element_count(map, 'C');
	c = make_pos_array(count);
	get_position(c, map);
	return (c);
}
