/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:09:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:26:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	state(t_philo *philo, size_t timestamp, int action)
{
	sem_wait(philo->main->semaphores.state);
	if (action == T_FORK)
		printf("%zu %zu has taken a fork\n", timestamp, philo->index);
	else if (action == EATING)
		printf("%zu %zu is eating\n", timestamp, philo->index);
	else if (action == SLEEPING)
		printf("%zu %zu is sleeping\n", timestamp, philo->index);
	else if (action == THINKING)
		printf("%zu %zu is thinking\n", timestamp, philo->index);
	else if (action == FINISHED)
		printf("%zu %zu has finished his meals\n", timestamp, philo->index);
	else if (action == DIED)
	{
		printf("%zu %zu died\n", timestamp, philo->index);
		sem_post(philo->main->semaphores.die);
	}
	sem_post(philo->main->semaphores.state);
}
