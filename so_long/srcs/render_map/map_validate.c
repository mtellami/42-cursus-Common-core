/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:48:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 18:29:49 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**map_validate(char *map_path)
{
	char	**map;

	if (!map_extention(map_path))
		exit(0);
	map = read_map(map_path);
	if (!map)
		exit(0);
	if (!validate_content(map) || !validate_shape(map) || !validate_path(map))
	{
		free_map(map);
		exit(0);
	}
	return (map);
}
