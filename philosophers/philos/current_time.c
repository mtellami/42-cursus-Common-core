/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:12:08 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/18 19:09:15 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t	current_time(size_t start)
{
	size_t					now;
	static struct timeval	time;

	gettimeofday(&time, NULL);
	now = (time.tv_sec * 1000) + (time.tv_usec / 1000) - start;
	return (now);
}
