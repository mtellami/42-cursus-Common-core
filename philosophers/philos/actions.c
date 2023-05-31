/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:15:45 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/17 13:17:20 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	pick_fork(t_philo *philo, int i)
{
	size_t	fork;

	if (i)
		fork = philo->r_fork;
	else
		fork = philo->l_fork;
	return (fork);
}

int	take_fork(t_philo *philo)
{
	int		i;
	size_t	fork;

	if (philo->main->args.nt_ph_eat
		&& philo->meals == philo->main->args.nt_ph_eat)
		return (FAILURE);
	i = 0;
	while (i < 2)
	{
		if (is_dead(philo) || philo->main->over)
			return (FAILURE);
		fork = pick_fork(philo, i);
		pthread_mutex_lock(philo->main->mutex + fork);
		if (philo->main->args.forks[fork])
		{
			state(philo, current_time(philo->start), T_FORK);
			philo->main->args.forks[fork] = 0;
			i++;
		}
		pthread_mutex_unlock(philo->main->mutex + fork);
	}
	return (SUCCESS);
}

int	put_fork(t_philo *philo)
{
	pthread_mutex_lock(philo->main->mutex + philo->l_fork);
	philo->main->args.forks[philo->l_fork] = 1;
	pthread_mutex_unlock(philo->main->mutex + philo->l_fork);
	pthread_mutex_lock(philo->main->mutex + philo->r_fork);
	philo->main->args.forks[philo->r_fork] = 1;
	pthread_mutex_unlock(philo->main->mutex + philo->r_fork);
	if (philo->main->args.nt_ph_eat == philo->meals)
	{
		state(philo, current_time(philo->start), FINISHED);
		return (FAILURE);
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
	if (put_fork(philo))
		return (FAILURE);
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
