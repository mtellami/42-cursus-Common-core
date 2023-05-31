/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:23:38 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:48:26 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack *x, int n)
{
	t_node	*tmp;
	int		i;

	tmp = x->head;
	i = 0;
	while (tmp)
	{
		if (tmp->data == n)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
