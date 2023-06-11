/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *a / *b;
    *b = tmp / *b;
}

/*
#include <stdio.h>
int main()
{
    int x = 10, y = 4;
    ft_ultimate_div_mod(&x, &y);
    printf("%d\n%d\n", x, y);   
}
*/