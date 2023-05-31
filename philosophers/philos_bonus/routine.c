/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:56:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 17:41:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	philo->start = current_time(0);
	philo->last_meal = 0;
	philo->survive = philo->last_meal + philo->main->args.t_die;
	while (1)
	{
		if (eat(philo) || sleep_think(philo))
			break ;
	}
	return (NULL);
}
