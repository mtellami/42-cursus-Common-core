/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:50:39 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 12:29:09 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack **b, t_stack **a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!b || !a)
		return ;
	tmp1 = (*b)->head;
	tmp2 = (*a)->head;
	if ((*a)->size)
	{
		(*b)->head = tmp2;
		(*a)->head = tmp2->next;
		(*b)->head->next = tmp1;
		(*b)->size++;
		(*a)->size--;
		ft_putstr("pb\n");
	}
}
