/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:33:47 by mtellami          #+#    #+#             */
/*   Updated: 2022/08/11 21:11:44 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>
#include <unistd.h>

int	operator(int x, char *c, int y)
{
	int	res;
	int	(*operator[5])(int, int);

	operator[0] = &ft_addition;
	operator[1] = &ft_subtraction;
	operator[2] = &ft_multiplication;
	operator[3] = &ft_division;
	operator[4] = &ft_modulo;
	res = 1;
	if (c[0] == '+')
		res = operator[0](x, y);
	else if (c[0] == '-')
		res = operator[1](x, y);
	else if (c[0] == '*')
		res = operator[2](x, y);
	else if (c[0] == '/')
		res = operator[3](x, y);
	else if (c[0] == '%')
		res = operator[4](x, y);
	return (res);
}

void	do_op(char *a, char *o, char *b)
{
	int	x;
	int	y;
	int	res;

	res = 1;
	x = ft_atoi(a);
	y = ft_atoi(b);
	if (!(o[0] == '+' || o[0] == '-'
			|| o[0] == '/' || o[0] == '%' || o[0] == '*'))
		write (1, "0", 1);
	else if (o[0] == '/' && y == 0)
		write (1, "Stop : division by zero", 23);
	else if (o[0] == '%' && y == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		res *= (operator(x, o, y));
		ft_putnbr(res);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
