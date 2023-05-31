/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:06:37 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:10:42 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	free(s);
	return (str);
}
