/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
        i++;
        j--;
    }
}

/*
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int s = sizeof(arr) / 4;
    ft_rev_int_tab(arr, s);
    for (int i = 0; i < s; i++)
        printf("%d\n", arr[i]);
}
*/