/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:11:18 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 16:23:40 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	if (!(*str))
		return (0);
	if ((*str == '-' || *str == '+') && *(str + 1))
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_overflow(char *str)
{
	while (*str == '0')
		str++;
	if (ft_strlen(str) < 12)
	{
		if (str[0] == '-' && ft_atoi(str) > 0)
			return (1);
		else if (str[0] != '-' && ft_atoi(str) < 0)
			return (1);
	}
	else
		return (1);
	return (0);
}

int	check_error(int n, char **av)
{
	int	i;
	int	j;

	i = n - 1;
	while (i)
	{
		if (!(is_number(av[i])) || is_overflow(av[i]))
			return (1);
		i--;
	}
	i = n - 1;
	while (i > 1)
	{
		j = i - 1;
		while (j)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (1);
			j--;
		}
		i--;
	}
	return (0);
}
