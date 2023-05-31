/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_move_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:20:37 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/14 08:59:17 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest_num(t_stack *x)
{
	t_node	*tmp;
	int		nb;

	tmp = x->head;
	nb = tmp->data;
	while (tmp)
	{
		if (tmp->data > nb)
			nb = tmp->data;
		tmp = tmp->next;
	}
	return (nb);
}

void	chunks_move_two(t_stack **a, t_stack **b)
{
	while (stack_size(*b))
	{
		if ((*b)->head->data == biggest_num(*b))
			push_a(a, b);
		else
		{
			if (get_index(*b, biggest_num(*b)) > (int)stack_size(*b) / 2)
				while ((*b)->head->data != biggest_num(*b))
					r_rotate_b(b);
			else
				while ((*b)->head->data != biggest_num(*b))
					rotate_b(b);
		}
	}
}
