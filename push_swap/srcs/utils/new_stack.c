/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:52 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 09:12:39 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(int n, char **tab)
{
	t_stack	*x;
	t_node	*node;
	t_node	*s_head;

	x = malloc(sizeof(t_stack));
	if (!x)
		return (NULL);
	if (!n)
	{
		x->head = NULL;
		x->size = n;
	}
	else
	{
		s_head = NULL;
		x->size = n - 1;
		while (n > 1)
		{
			node = new_node(ft_atoi(tab[n - 1]));
			add_node(&s_head, node);
			n--;
		}
		x->head = s_head;
	}
	return (x);
}
