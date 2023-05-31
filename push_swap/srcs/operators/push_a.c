/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:23 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 10:50:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!a || !b)
		return ;
	tmp1 = (*a)->head;
	tmp2 = (*b)->head;
	if ((*b)->size)
	{
		(*a)->head = tmp2;
		(*b)->head = tmp2->next;
		(*a)->head->next = tmp1;
		(*a)->size++;
		(*b)->size--;
		ft_putstr("pa\n");
	}
}
