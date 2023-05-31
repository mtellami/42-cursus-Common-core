/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:26:29 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 18:25:14 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*reading(int fd)
{
	char	*map;
	char	*buffer;
	int		i;

	buffer = malloc(sizeof(char) * 11);
	if (!buffer)
		return (NULL);
	map = NULL;
	i = 1;
	while (i)
	{
		i = read(fd, buffer, 10);
		if (i == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		map = ft_strjoin(map, buffer);
	}
	free(buffer);
	return (map);
}

char	**get_map(char *str)
{
	char	**map;

	if (str[0] == '\n' || str[ft_strlen(str) - 1] == '\n')
	{
		map_errors(3);
		return (NULL);
	}
	map = ft_split(str, '\n');
	if (!map)
	{
		free(str);
		return (NULL);
	}
	return (map);
}

char	**read_map(char *map_path)
{
	char	**map;
	char	*str;
	int		fd;

	fd = open(map_path, O_RDONLY);
	if (fd == -1)
	{
		function_error(2);
		return (NULL);
	}
	str = reading(fd);
	if (!str)
	{
		function_error(4);
		return (NULL);
	}
	close(fd);
	map = get_map(str);
	if (!map)
		return (NULL);
	free(str);
	return (map);
}
