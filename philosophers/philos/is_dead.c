/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dead.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:58:47 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/17 13:14:24 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_dead(t_philo *philo)
{
	if (current_time(philo->start) > philo->survive)
	{
		state(philo, philo->survive, DIED);
		return (FAILURE);
	}
	return (SUCCESS);
}
