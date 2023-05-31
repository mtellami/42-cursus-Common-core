/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:46:53 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:18:34 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	*ft_stradd(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}

char	*get_line(int fd)
{
	char	*line;
	char	*buff;
	int		i;

	line = NULL;
	buff = ft_strdup(" ");
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strchr(line) && i)
	{
		i = read(fd, buff, 1);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		line = ft_stradd(line, buff);
	}
	free(buff);
	if (!(*line))
		return (NULL);
	line = ft_substr(line, 0, ft_strlen(line) - 1);
	return (line);
}
