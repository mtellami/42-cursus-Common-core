/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 17:11:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**duplicate_map(char **map)
{
	char	**dup;
	int		i;

	i = 0;
	while (map[i])
		i++;
	dup = malloc(sizeof(char *) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (map[i])
	{
		dup[i] = ft_strdup(map[i]);
		i++;
	}
	dup[i] = 0;
	return (dup);
}
