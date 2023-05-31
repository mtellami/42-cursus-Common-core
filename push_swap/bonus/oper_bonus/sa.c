/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:00 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/14 16:12:03 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!a || (*a)->size <= 1)
		return ;
	tmp1 = (*a)->head;
	tmp2 = (*a)->head->next;
	if (tmp1 && tmp2)
	{
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		(*a)->head = tmp2;
	}
}
