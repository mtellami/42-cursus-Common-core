/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:26:05 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/15 03:52:45 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_type(va_list ap, char type, int *size)
{
	if (type == 'c')
		ft_putchar(va_arg(ap, int), size);
	else if (type == 's')
		ft_putstr(va_arg(ap, char *), size);
	else if (type == 'p')
	{
		ft_putstr("0x", size);
		ft_puthex(va_arg(ap, unsigned long), "0123456789abcdef", size);
	}
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(ap, int), size);
	else if (type == 'u')
		ft_putnbr_u(va_arg(ap, unsigned int), size);
	else if (type == 'x')
		ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef", size);
	else if (type == 'X')
		ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF", size);
	else if (type == '%')
		ft_putchar('%', size);
}

int	ft_printf(char *str, ...)
{
	va_list	ap;
	int		size;

	va_start(ap, str);
	size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_print_type(ap, *str, &size);
		}
		else
			ft_putchar(*str, &size);
		str++;
	}
	va_end(ap);
	return (size);
}
