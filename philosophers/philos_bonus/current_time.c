/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:08:58 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/18 19:09:17 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

size_t	current_time(size_t start)
{
	size_t					now;
	static struct timeval	time;

	gettimeofday(&time, NULL);
	now = (time.tv_sec * 1000) + (time.tv_usec / 1000) - start;
	return (now);
}
