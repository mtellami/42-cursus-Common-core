/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:02:39 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:31:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	take_fork(t_philo *philo)
{
	size_t	i;

	i = 0;
	while (i < 2)
	{
		if (is_dead(philo))
			return (FAILURE);
		if (!(i == 1 && philo->main->args.n_philo == 1))
		{
			sem_wait(philo->main->semaphores.forks);
			state(philo, current_time(philo->start), T_FORK);
			i++;
		}
	}
	return (SUCCESS);
}

int	eat(t_philo *philo)
{
	if (take_fork(philo) || philo->main->over)
		return (FAILURE);
	philo->last_meal = current_time(philo->start);
	state(philo, philo->last_meal, EATING);
	waiting(philo->start, philo->main->args.t_eat);
	philo->survive = philo->last_meal + philo->main->args.t_die;
	philo->meals++;
	sem_post(philo->main->semaphores.forks);
	sem_post(philo->main->semaphores.forks);
	if (philo->main->args.nt_ph_eat == philo->meals)
	{
		state(philo, current_time(philo->start), FINISHED);
		return (FAILURE);
	}
	return (SUCCESS);
}

int	sleep_think(t_philo *philo)
{
	if (philo->main->over)
		return (FAILURE);
	state(philo, philo->last_meal + philo->main->args.t_eat, SLEEPING);
	waiting(philo->start, philo->main->args.t_sleep);
	if (is_dead(philo))
		return (FAILURE);
	state(philo, philo->last_meal + philo->main->args.t_eat
		+ philo->main->args.t_sleep, THINKING);
	return (SUCCESS);
}
