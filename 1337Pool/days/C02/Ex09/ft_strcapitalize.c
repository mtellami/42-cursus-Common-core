/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by mtellami          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alphanumeric(char c)
{
    if ((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

char    *ft_strcapitalize(char *str)
{
    int i;
    int first;

    i = 0;
    first = 1;
    while(str[i])
    {
        if (ft_str_is_alphanumeric(str[i]))
        {
            if (first && (str[i] >= 'a' && str[i] <= 'z'))
            {
                str[i] -= 32;
                first = 0;
            }
            else if (!first && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32;
            first = 0;
        }
        else
            first = 1;
        i++;
    }
    return str;
}

/*
#include <stdio.h>
int main()
{
    char str[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
}
*/