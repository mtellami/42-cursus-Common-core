/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_move_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:06:08 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:47:30 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift(t_stack **a, t_stack **b, t_form **x, int n)
{
	int	*tab;

	tab = (*x)->arr;
	while ((*a)->head->data < tab[(*x)->start]
		|| (*a)->head->data > tab[(*x)->end])
		rotate_a(a);
	push_b(b, a);
	if (n < (*x)->midd)
		rotate_b(b);
}

void	r_shift(t_stack **a, t_stack **b, t_form **x, int n)
{
	int	*tab;

	tab = (*x)->arr;
	while ((*a)->head->data < tab[(*x)->start]
		|| (*a)->head->data > tab[(*x)->end])
		r_rotate_a(a);
	push_b(b, a);
	if (n < (*x)->midd)
		rotate_b(b);
}

void	set_start_end(t_form **x)
{
	if ((*x)->start - (*x)->chunk < 0)
		(*x)->start = 0;
	else
		(*x)->start -= (*x)->chunk;
	if ((*x)->end + (*x)->chunk > (*x)->size - 1)
		(*x)->end = (*x)->size;
	else
		(*x)->end += (*x)->chunk;
}

void	chunks_move_one(t_stack **a, t_stack **b, t_form **x)
{
	t_node	*tmp;
	int		*tab;

	if (!(*a)->size)
		return ;
	tab = (*x)->arr;
	set_start_end(x);
	tmp = (*a)->head;
	while (tmp)
	{
		if (tmp->data >= tab[(*x)->start] && tmp->data <= tab[(*x)->end])
		{
			if (get_index((*a), tmp->data) > (*x)->size / 2)
				r_shift(a, b, x, tmp->data);
			else
				shift(a, b, x, tmp->data);
			tmp = (*a)->head;
		}
		else
			tmp = tmp->next;
	}
	chunks_move_one(a, b, x);
}
