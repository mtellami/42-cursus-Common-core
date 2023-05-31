/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 05:54:43 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/19 07:52:20 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_reminder(char *tmp)
{
	char	*rem;
	int		i;
	int		j;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (!tmp[i])
	{
		free(tmp);
		return (NULL);
	}
	rem = malloc(sizeof(char) * (ft_strlen(tmp) - i));
	if (!rem)
		return (NULL);
	i++;
	j = 0;
	while (tmp[i + j])
	{
		rem[j] = tmp[i + j];
		j++;
	}
	rem[j] = '\0';
	free(tmp);
	return (rem);
}

char	*get_new_line(char *tmp)
{
	char	*line;
	int		i;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (tmp[i] == '\n')
		line = malloc(sizeof(char) * (i + 2));
	else
		line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (tmp[i] && tmp[i] != '\n')
	{
		line[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*read_file(int fd, char *tmp)
{
	char		*buff;
	int			i;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strchr(tmp) && i)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		tmp = ft_strjoin(tmp, buff);
	}
	free(buff);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*tmp[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	tmp[fd] = read_file(fd, tmp[fd]);
	if (!tmp[fd])
		return (0);
	if (!(*tmp[fd]))
	{
		free(tmp[fd]);
		tmp[fd] = NULL;
		return (NULL);
	}
	line = get_new_line(tmp[fd]);
	tmp[fd] = get_reminder(tmp[fd]);
	return (line);
}
