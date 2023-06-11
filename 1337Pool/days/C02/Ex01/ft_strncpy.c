/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

/*
#include <stdio.h>
int main()
{
    char src[] = "I got the strap", dest[sizeof(src)];
    printf("%s\n", ft_strncpy(dest, src, 7));
}
*/