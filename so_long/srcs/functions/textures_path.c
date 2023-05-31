/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:18:13 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 13:10:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*textures_path(char c)
{
	char	*path;

	path = NULL;
	if (c == '0')
		path = "textures/empty.xpm";
	else if (c == '1')
		path = "textures/wall.xpm";
	else if (c == 'P')
		path = "textures/player_0.xpm";
	else if (c == 'C')
		path = "textures/collect.xpm";
	else if (c == 'E')
		path = "textures/exit.xpm";
	return (path);
}
