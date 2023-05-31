/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:09:42 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 17:07:18 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_valid_path(char **map, int x, int y, t_pos *end)
{
	if (map[x][y] == '1' || map[x][y] == 'E') 
		return (0);
	if (x == end->x && y == end->y)
		return (1);
	if (check_valid_path(map, x + 1, y, end))
		return (1);
	else
		map[x][y] = '1';
	if (check_valid_path(map, x - 1, y, end))
		return (1);
	else
		map[x][y] = '1';
	if (check_valid_path(map, x, y + 1, end))
		return (1);
	else
		map[x][y] = '1';
	if (check_valid_path(map, x, y - 1, end))
		return (1);
	else
		map[x][y] = '1';
	return (0);
}

void	free_pos(t_pos **C, t_pos *P, t_pos *E)
{
	int	i;

	i = 0;
	while (C[i])
	{
		free(C[i]);
		i++;
	}
	free(C);
	free(P);
	free(E);
}

int	collec_valide_path(t_pos **c, int x, int y, char **map)
{
	char	**dup;
	int		i;

	i = 0;
	while (c[i])
	{
		dup = duplicate_map(map);
		if (!check_valid_path(dup, x, y, c[i]))
		{
			map_errors(4);
			free_map(dup);
			return (0);
		}
		free_map(dup);
		i++;
	}
	return (1);
}

int	validate_path(char **map)
{
	t_pos	*p;
	t_pos	*e;
	t_pos	**c;
	char	**dup;

	e = element_position(map, 'E');
	p = element_position(map, 'P');
	dup = duplicate_map(map);
	if (!check_valid_path(dup, p->x, p->y, e))
	{
		map_errors(4);
		return (0);
	}
	free_map(dup);
	c = positions(map, 'C');
	if (!collec_valide_path(c, p->x, p->y, map))
	{
		free_pos(c, p, e);
		return (0);
	}
	free_pos(c, p, e);
	return (1);
}
