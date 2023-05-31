/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:15:18 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/17 12:59:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	waiting(size_t start, size_t ms)
{
	size_t	date;

	date = current_time(start) + ms;
	while (current_time(start) < date)
		usleep(1);
}
