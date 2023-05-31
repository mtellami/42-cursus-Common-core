/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:10:05 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/20 13:31:09 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		i += 1;
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
	static char	*tmp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = read_file(fd, tmp);
	if (!tmp)
		return (NULL);
	if (!(*tmp))
	{
		free(tmp);
		tmp = NULL;
		return (NULL);
	}
	line = get_new_line(tmp);
	tmp = get_reminder(tmp);
	return (line);
}
