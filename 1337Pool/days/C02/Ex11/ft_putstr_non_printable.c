/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
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

int    ft_is_printable(char c)
{
    if (c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

void    ft_putchar_hex(char c)
{
    char    *hex;

    hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_is_printable(str[i]))
            ft_putchar(str[i]);
        else
        {
            ft_putchar('//');
            ft_putchar_hex(str[i]);
        }
        i++;
    }
}

/*
int main()
{
    ft_putstr_non_printable("i wanna/n thank me!");
}
*/