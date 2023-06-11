/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_power.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:04:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/07/30 10:12:32 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		i = nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (i);
}
