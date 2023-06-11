/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:04:36 by mtellami          #+#    #+#             */
/*   Updated: 2022/07/28 20:25:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (i);
}
