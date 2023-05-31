/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:12:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/27 13:16:03 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
