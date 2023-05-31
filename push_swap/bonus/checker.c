/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:52:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/14 16:34:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shifting(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strcmp(str, "ra\n"))
		ra(a);
	else if (!ft_strcmp(str, "rb\n"))
		rb(b);
	else if (!ft_strcmp(str, "rr\n"))
	{
		ra(a);
		rb(b);
	}
	else if (!ft_strcmp(str, "rra\n"))
		rra(a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(str, "rrr\n"))
	{
		rra(a);
		rrb(b);
	}
	else
	{
		free(str);
		write(2, "Error\n", 7);
		free_memory(a, b);
		exit (0);
	}
}

void	applying_inst(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		sa(a);
	else if (!ft_strcmp(str, "sb\n"))
		sb(b);
	else if (!ft_strcmp(str, "ss\n"))
	{
		sa(a);
		sb(b);
	}
	else if (!ft_strcmp(str, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(str, "pb\n"))
		pb(b, a);
	else
		shifting(a, b, str);
}

void	get_instructions(t_stack **a, t_stack **b)
{
	char	*buffer;

	buffer = get_next_line(0, 10);
	while (buffer)
	{
		applying_inst(a, b, buffer);
		free(buffer);
		buffer = get_next_line(0, 10);
	}
	if (is_sorted((*a)->head) && !(*b)->size)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	if (check_error(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	a = new_stack(argc, argv);
	b = new_stack(0, argv);
	get_instructions(&a, &b);
	free_memory(&a, &b);
	return (0);
}
