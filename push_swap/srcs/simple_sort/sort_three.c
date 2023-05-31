/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:42 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 16:25:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	n1;
	int	n2;
	int	n3;

	if (is_sorted((*a)->head))
		return ;
	n1 = (*a)->head->data;
	n2 = (*a)->head->next->data;
	n3 = (*a)->head->next->next->data;
	if (n1 > n2 && n2 < n3 && n3 > n1)
		swap(a);
	else if (n1 > n2 && n2 > n3)
	{
		swap(a);
		r_rotate_a(a);
	}
	else if (n1 > n2 && n2 < n3 && n3 < n1)
		rotate_a(a);
	else if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		swap(a);
		rotate_a(a);
	}
	else
		r_rotate_a(a);
}
