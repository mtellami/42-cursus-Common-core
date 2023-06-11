/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i++;
    }
}

/*
#include <stdio.h>
int main()
{
    int arr[] = {4, 2, 5, 1, 2};
    int s = sizeof(arr) / 4;
    ft_sort_int_tab(arr, s);
    for (int i = 0; i < s; i++)
        printf("%d\n", arr[i]);
}
*/