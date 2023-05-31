/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:24:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/12 19:08:42 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char const *s, const char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_isinset(set, s1[i]))
		i++;
	while (j >= 0 && ft_isinset(set, s1[j]))
		j--;
	if (j == -1)
		return (ft_substr(s1, i, 0));
	return (ft_substr(s1, i, (j - i + 1)));
}
