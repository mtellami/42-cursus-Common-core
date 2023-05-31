/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_last_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:43 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 09:12:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*pre_last_node(t_node *node)
{
	if (!node)
		return (NULL);
	while (node->next->next)
		node = node->next;
	return (node);
}
