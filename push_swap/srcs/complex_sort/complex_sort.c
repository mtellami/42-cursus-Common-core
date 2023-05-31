/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:26:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:48:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack **a, t_stack **b)
{
	int		*arr;
	int		n;
	t_form	*form;

	arr = sorted_array(*a);
	if ((*a)->size < 10)
		n = 5;
	else if ((*a)->size < 150)
		n = 8;
	else
		n = 15;
	form = make_form(arr, (*a)->size, n);
	chunks_move_one(a, b, &form);
	chunks_move_two(a, b);
	free(arr);
	free(form);
}
