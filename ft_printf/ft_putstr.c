/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:27:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/15 05:01:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *size)
{
	if (!str)
	{	
		ft_putstr("(null)", size);
		return ;
	}
	while (*str)
		ft_putchar(*str++, size);
}
