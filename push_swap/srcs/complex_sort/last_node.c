/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:29:52 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/14 09:04:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*last_node(t_node *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
