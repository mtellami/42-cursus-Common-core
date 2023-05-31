/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:56:15 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 08:23:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_stack **b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!b || !(*b) || (*b)->size < 2)
		return ;
	tmp1 = (*b)->head;
	tmp2 = pre_last_node((*b)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*b)->head = tmp1->next;
		tmp1->next = NULL;
		ft_putstr("rb\n");
	}
}
