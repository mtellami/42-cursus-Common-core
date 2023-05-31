/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:14:23 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 17:45:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	element_count(char **map, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
