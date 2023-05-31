/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:48:47 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 03:08:36 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	main(int ac, char **av)
{
	t_main	main;

	if (ac != 5 && ac != 6)
		return (ft_errors(N_ARGS));
	if (initialize_bonus(ac, av, &main))
		return (FAILURE);
	launch(&main);
	sem_wait(main.semaphores.die);
	destroy(&main);
	return (SUCCESS);
}
