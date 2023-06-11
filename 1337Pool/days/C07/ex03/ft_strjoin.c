/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:54:14 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/01 17:12:54 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_stringlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	len += i * (size - 1);
	return (len);
}

char	*ft_strscat(char *str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[x++] = strs[i][j++];
		if (i < size - 1)
		{
			y = 0;
			while (sep[y])
				str[x++] = sep[y++];
		}
		i++;
	}
	str[x] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*string;

	if (size == 0)
	{
		string = malloc(1);
		return (string);
	}
	len = ft_stringlen(size, strs, sep);
	string = malloc(sizeof(char) * len + 1);
	if (!string)
		return (0);
	return (ft_strscat(string, strs, sep, size));
}
