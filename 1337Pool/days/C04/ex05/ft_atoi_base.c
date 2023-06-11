/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:54:16 by mtellami          #+#    #+#             */
/*   Updated: 2022/07/26 10:35:32 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int	is_valid(char *str)
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

int	ft_putnbr_base(long nbr, char *base)
{
	int	len;
	int	sign;

	len = ft_strlen(base);
	sign = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	if (nbr > len)
	{
		nbr = ft_putnbr_base(nbr / len, base) * 10;
		nbr = nbr + ft_putnbr_base(nbr % len, base);
	}
	if (nbr < len)
	{
		nbr = base[nbr];
		return (sign * nbr);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	len;

	i = 0;
	len = ft_strlen(base);
	nbr = ft_atoi(str);
	if (is_valid(base))
	{
		ft_putnbr_base(nbr, base);
		return (nbr);
	}
	return (0);
}
