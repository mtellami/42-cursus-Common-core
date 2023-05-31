/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:29:00 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:35:52 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	args_init(int ac, char **av, t_main *main)
{
	if (ft_atol(av[1], &main->args.n_philo)
		|| ft_atol(av[2], &main->args.t_die)
		|| ft_atol(av[3], &main->args.t_eat)
		|| ft_atol(av[4], &main->args.t_sleep))
		return (ft_errors(ARGS));
	if (ac == 6 && ft_atol(av[5], &main->args.nt_ph_eat))
		return (ft_errors(ARGS));
	else if (ac == 5)
		main->args.nt_ph_eat = 0;
	main->over = 0;
	main->exit = 0;
	return (SUCCESS);
}

int	philos_init(t_main *main)
{
	size_t	i;

	main->philos = malloc(sizeof(t_philo) * main->args.n_philo);
	if (!main->philos)
		return (ft_errors(MALLOC));
	i = 0;
	while (i < main->args.n_philo)
	{
		main->philos[i].index = i + 1;
		main->philos[i].meals = 0;
		main->philos[i].main = main;
		i++;
	}
	return (SUCCESS);
}

int	semaphores_init(t_main *main)
{
	sem_unlink("forks");
	sem_unlink("state");
	sem_unlink("die");
	main->semaphores.forks = sem_open("forks",
			O_CREAT, 0644, main->args.n_philo);
	main->semaphores.state = sem_open("state", O_CREAT, 0644, 1);
	main->semaphores.die = sem_open("die", O_CREAT, 0644, 1);
	return (SUCCESS);
}

int	initialize_bonus(int ac, char **av, t_main *main)
{
	if (args_init(ac, av, main))
		return (FAILURE);
	if (philos_init(main))
		return (FAILURE);
	if (semaphores_init(main))
		return (FAILURE);
	return (SUCCESS);
}
