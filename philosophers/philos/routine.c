/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:42:00 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/17 14:22:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	philo->last_meal = 0;
	philo->survive = philo->main->args.t_die;
	philo->start = current_time(0);
	if (philo->index % 2)
		waiting(0, 1);
	while (1)
	{
		if (eat(philo) || sleep_think(philo))
			break ;
	}
	pthread_mutex_lock(&philo->main->finished);
	philo->main->exit++;
	pthread_mutex_unlock(&philo->main->finished);
	return (NULL);
}
