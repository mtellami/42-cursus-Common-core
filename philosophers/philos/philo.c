/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:07:36 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/15 18:37:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_main	main;

	if (ac != 5 && ac != 6)
		return (ft_errors(N_ARGS));
	if (initialize(ac, av, &main))
		return (FAILURE);
	if (launch(&main))
		return (FAILURE);
	while (1)
	{
		if (main.exit == main.args.n_philo)
			break ;
	}
	destroy(&main);
	return (SUCCESS);
}
