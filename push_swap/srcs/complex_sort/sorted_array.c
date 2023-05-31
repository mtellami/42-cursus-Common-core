/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:23:58 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:48:59 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(int *arr, int start, int end)
{
	int	pivot;
	int	i;
	int	j;
	int	tmp;

	pivot = arr[end];
	i = start - 1;
	j = start;
	while (j <= end - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		j++;
	}
	i++;
	tmp = arr[i];
	arr[i] = arr[end];
	arr[end] = tmp;
	return (i);
}

void	quick_sort(int *arr, int start, int end)
{
	int	pivot;

	if (end <= start)
		return ;
	pivot = partition(arr, start, end);
	quick_sort(arr, start, pivot - 1);
	quick_sort(arr, pivot + 1, end);
}

int	*fill_array(int *arr, t_stack *x)
{
	int		i;
	t_node	*tmp;

	if (!arr || !x)
		return (0);
	i = 0;
	tmp = x->head;
	while (tmp)
	{
		arr[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (arr);
}

int	*sorted_array(t_stack *x)
{
	int	*arr;

	arr = malloc(sizeof(int) * stack_size(x));
	arr = fill_array(arr, x);
	quick_sort(arr, 0, stack_size(x));
	return (arr);
}
