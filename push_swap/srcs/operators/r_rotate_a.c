/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:17 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 12:29:15 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(t_stack **a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!a || !(*a))
		return ;
	tmp1 = (*a)->head;
	tmp2 = pre_last_node((*a)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*a)->head = tmp2->next;
		tmp2->next = NULL;
		ft_putstr("rra\n");
	}
}
