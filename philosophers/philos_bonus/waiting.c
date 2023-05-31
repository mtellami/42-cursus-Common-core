/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:09:20 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/18 19:09:44 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	waiting(size_t start, size_t ms)
{
	size_t	date;

	date = current_time(start) + ms;
	while (current_time(start) < date)
		usleep(1);
}
