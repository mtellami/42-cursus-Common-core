/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:47:06 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:47:32 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	ft_errors(int err)
{
	if (err == N_ARGS)
		printf("Error : invalid number of arguments\n");
	else if (err == ARGS)
		printf("Error : wrong arguments\n");
	else if (err == MALLOC)
		printf("Error : fail memory allocation\n");
	else if (err == THREAD_ERR)
		printf("Error : fail creating threads\n");
	return (FAILURE);
}
