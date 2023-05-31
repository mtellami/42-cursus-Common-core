/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:56:15 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/14 16:17:20 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack **b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!b || !(*b) || (*b)->size <= 1)
		return ;
	tmp1 = (*b)->head;
	tmp2 = pre_last_node((*b)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*b)->head = tmp1->next;
		tmp1->next = NULL;
	}
}
