/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:49:19 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:42:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*waitproccess(void *arg)
{
	size_t	i;
	t_main	*main;

	main = (t_main *)arg;
	i = 0;
	while (i < main->args.n_philo)
		waitpid(main->philos[i++].pid, NULL, 0);
	exit(SUCCESS);
}

int	launch(t_main *main)
{
	size_t		i;
	pthread_t	tid;

	i = 0;
	sem_wait(main->semaphores.die);
	while (i < main->args.n_philo)
	{
		main->philos[i].pid = fork();
		if (main->philos[i].pid == 0)
		{
			routine(&main->philos[i]);
			exit(SUCCESS);
		}
		i++;
	}
	pthread_create(&tid, NULL, &waitproccess, (void *)main);
	pthread_detach(tid);
	return (SUCCESS);
}
