/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:21:52 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/11 18:15:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tabsize(const char *str, char c)
{
	int	size;

	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			size++;
		while (*str && *str != c)
			str++;
	}
	return (size);
}

static int	ft_wordlen(const char *str, char c)
{
	int	len;

	len = 0;
	while (*str && *str == c)
		str++;
	while (*str && *str != c)
	{
		str++;
		len++;
	}
	return (len);
}

static char	*ft_word(const char *str, char c)
{
	char	*word;
	int		i;
	int		len;

	len = ft_wordlen(str, c);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_tabsize(s, c) + 1));
	if (!tab)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i] = ft_word(s, c);
			if (!tab[i])
				return (0);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = 0;
	return (tab);
}
