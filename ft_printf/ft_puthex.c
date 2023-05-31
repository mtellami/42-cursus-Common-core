/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:09:44 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/15 05:58:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long i, char *hex, int *size)
{
	if (i > 15)
	{
		ft_puthex(i / 16, hex, size);
		ft_putchar(hex[i % 16], size);
	}
	else
		ft_putchar(hex[i % 16], size);
}
