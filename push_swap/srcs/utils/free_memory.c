/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:06:27 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 15:04:19 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **lst)
{
	t_node	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

void	free_memory(t_stack **x, t_stack **y)
{
	free_list(&(*x)->head);
	free_list(&(*y)->head);
	free(*x);
	free(*y);
	*x = NULL;
	*y = NULL;
}
