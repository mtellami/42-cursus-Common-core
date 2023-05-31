/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:13:07 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/12 18:53:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	n;
	int	s;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	s = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			s *= -1;
		str++;
	}
	n = 0;
	while (ft_isdigit(*str))
		n = (n * 10) + (*str++ - 48);
	return (n * s);
}
