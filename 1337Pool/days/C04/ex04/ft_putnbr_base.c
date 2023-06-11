/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:51:49 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/01 14:28:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	long	n;

	i = 0;
	n = nbr;
	len = ft_strlen(base);
	if (base_is_valid(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < len)
		{
			ft_putchar(base[n]);
		}
		if (n > len)
		{
			ft_putnbr_base(n / len, base);
			ft_putnbr_base(n % len, base);
		}
	}
}
