/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:12:23 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 00:13:02 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	destroy(t_main *main)
{
	size_t	i;

	i = 0;
	while (i < main->args.n_philo)
		kill(main->philos[i++].pid, SIGKILL);
}
