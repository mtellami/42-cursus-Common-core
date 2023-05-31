/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:56:27 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 09:12:55 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_size(t_stack *x)
{
	t_node	*tmp;
	size_t	i;

	i = 0;
	tmp = x->head;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
