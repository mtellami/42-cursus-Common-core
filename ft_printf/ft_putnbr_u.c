/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:04:20 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/13 23:28:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *size)
{
	if (nbr < 10)
		ft_putchar(nbr + 48, size);
	else
	{
		ft_putnbr_u(nbr / 10, size);
		ft_putnbr_u(nbr % 10, size);
	}
}
