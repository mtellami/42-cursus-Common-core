/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:02 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 18:04:41 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	if (check_error(ac, av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	a = new_stack(ac, av);
	b = new_stack(0, av);
	if (is_sorted(a->head))
	{
		free_memory(&a, &b);
		return (0);
	}
	if (ac < 7)
		simple_sort(&a, &b);
	else
		complex_sort(&a, &b);
	free_memory(&a, &b);
	return (0);
}
