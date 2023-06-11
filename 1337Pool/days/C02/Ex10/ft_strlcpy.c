/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int l;

    i = 0;
    l = 0;
    while (src[l])
        l++;
    if (size == 0)
        return (l);
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return l;
}

/*
#include <stdio.h>
int main()
{
    char src[] = "The real ones been dyin', the fake ones is lit", dest[sizeof(src)];
    printf("%s\n%d\n",dest, ft_strlcpy(dest, src, sizeof(src)));
}
*/