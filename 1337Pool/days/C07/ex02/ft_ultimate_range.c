/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:34:33 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/01 16:08:02 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
