/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:55:22 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/17 14:21:03 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	launch(t_main *main)
{
	size_t	i;

	i = 0;
	while (i < main->args.n_philo)
	{
		if (pthread_create(main->tid + i, NULL, &routine, main->philos + i))
			return (ft_errors(THREAD_ERR));
		pthread_detach(main->tid[i]);
		i += 2;
	}
	i = 1;
	while (i < main->args.n_philo)
	{
		if (pthread_create(main->tid + i, NULL, &routine, main->philos + i))
			return (ft_errors(THREAD_ERR));
		pthread_detach(main->tid[i]);
		i += 2;
	}
	return (SUCCESS);
}
