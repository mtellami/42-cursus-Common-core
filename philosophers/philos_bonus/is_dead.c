/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dead.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:17:28 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 03:00:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	is_dead(t_philo *philo)
{
	if (current_time(philo->start) > philo->survive)
	{
		state(philo, philo->survive, DIED);
		return (FAILURE);
	}
	return (SUCCESS);
}
