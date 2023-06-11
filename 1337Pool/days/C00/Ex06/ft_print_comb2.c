/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(int x, int y)
{
    ft_putchar((x / 10) + '0');
    ft_putchar((x % 10) + '0');
    ft_putchar(' ');
    ft_putchar((y / 10) + '0');
    ft_putchar((y % 10) + '0');
    if (x < 98)
        write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    while (x <= 98)
    {
        y = x + 1;
        while (y <= 99)
        {
            ft_print_numbers(x, y);
            y++;
        }
        x++;
    }
}