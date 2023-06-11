/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:54:10 by mtellami          #+#    #+#             */
/*   Updated: 2022/07/27 18:51:38 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
		res *= nb * ft_recursive_factorial(nb - 1);
	else if (nb < 0)
		return (0);
	return (res);
}
