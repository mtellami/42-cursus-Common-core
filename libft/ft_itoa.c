/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:35:11 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/11 18:17:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit_count(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbr == 0)
		str[0] = 48;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}
