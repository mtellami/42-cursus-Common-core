/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:22:14 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/11 10:04:20 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
