/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:49:52 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 17:46:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_pos	*element_position(char **map, char c)
{
	t_pos	*p;
	int		i;
	int		j;

	p = malloc(sizeof(t_pos));
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
			{
				p->x = i;
				p->y = j;
				return (p);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
