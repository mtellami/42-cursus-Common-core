/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:48:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/13 17:04:48 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	args_init(int ac, char **av, t_main *main)
{
	size_t	i;

	if (ft_atol(av[1], &main->args.n_philo)
		|| ft_atol(av[2], &main->args.t_die)
		|| ft_atol(av[3], &main->args.t_eat)
		|| ft_atol(av[4], &main->args.t_sleep))
		return (ft_errors(ARGS));
	if (ac == 6 && ft_atol(av[5], &main->args.nt_ph_eat))
		return (ft_errors(ARGS));
	else if (ac == 5)
		main->args.nt_ph_eat = 0;
	main->args.forks = malloc(sizeof(size_t) * main->args.n_philo);
	if (!main->args.forks)
		return (ft_errors(MALLOC));
	i = 0;
	while (i < main->args.n_philo)
		main->args.forks[i++] = 1;
	main->over = 0;
	main->exit = 0;
	return (SUCCESS);
}

int	philos_init(t_main *main)
{
	size_t	i;

	main->philos = malloc(sizeof(t_philo) * main->args.n_philo);
	main->tid = malloc(sizeof(pthread_t) * main->args.n_philo);
	if (!main->philos || !main->tid)
		return (ft_errors(MALLOC));
	i = 0;
	while (i < main->args.n_philo)
	{
		main->philos[i].index = i + 1;
		main->philos[i].l_fork = i;
		main->philos[i].r_fork = (i + 1) % main->args.n_philo;
		main->philos[i].meals = 0;
		main->philos[i].main = main;
		i++;
	}
	return (SUCCESS);
}

int	mutex_init(t_main *main)
{
	size_t	i;

	main->mutex = malloc(sizeof(pthread_mutex_t) * main->args.n_philo);
	if (!main->mutex)
		return (ft_errors(MALLOC));
	i = 0;
	while (i < main->args.n_philo)
		pthread_mutex_init(main->mutex + i++, NULL);
	pthread_mutex_init(&main->state, NULL);
	pthread_mutex_init(&main->finished, NULL);
	return (SUCCESS);
}

int	initialize(int ac, char **av, t_main *main)
{
	if (args_init(ac, av, main))
		return (FAILURE);
	if (philos_init(main))
		return (FAILURE);
	if (mutex_init(main))
		return (FAILURE);
	return (SUCCESS);
}
