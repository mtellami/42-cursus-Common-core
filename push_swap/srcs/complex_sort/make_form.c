/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_form.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:30:39 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:48:39 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_form	*make_form(int *tab, int s, int n)
{
	t_form	*new;

	new = malloc(sizeof(t_form));
	if (!new)
		return (NULL);
	new->arr = tab;
	new->size = s;
	new->midd = s / 2;
	new->chunk = s / n;
	new->start = s / 2;
	new->end = s / 2;
	return (new);
}
