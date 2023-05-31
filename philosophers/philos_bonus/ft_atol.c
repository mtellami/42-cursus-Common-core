/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:47:39 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:47:56 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	ft_atol(char *str, size_t *arg)
{
	if (!(*str))
		return (FAILURE);
	*arg = 0;
	while (*str && *str >= '0' && *str <= '9')
		*arg = (*arg * 10) + (*str++ - '0');
	if (*str || !(*arg))
		return (FAILURE);
	return (SUCCESS);
}
