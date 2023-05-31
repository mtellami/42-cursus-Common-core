/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:53:39 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/26 17:01:30 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strjoin(char *s1, char c, char *s2)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!str)
		return (0);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	str[i++] = c;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
