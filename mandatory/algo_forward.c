/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_forward.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:06:51 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 20:11:16 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_spot_in_b(t_list **stack_a, t_list **stack_b, int len)
{
	int		count;
	t_list	*start_b;
	
	count = 1;
	start_b = *stack_b;
	while (start_b->next)
	{
		while ((*stack_b)->num < (*stack_a)->num
			&& (*stack_b)->num < ft_lstlast(*stack_b)->num
			&& ft_lstlast(*stack_b)->num < (*stack_a)->num)
			ft_rrb(stack_b);
		if (start_b->num > (*stack_a)->num && start_b->next->num < (*stack_a)->num)
		{
			if (len - count > count)
				while (--count >= 0)
					ft_rb(stack_b);
			else
				while (++count <= len)
					ft_rrb(stack_b);
			break ;
		}
		count++;
		start_b = start_b->next;
	}
}

int ft_second_and_last_of_stack_a(t_list **stack_a, t_list **stack_b, t_vars *vars)
{	
	// Max --> das neue Maximum von Stack_b ist an erster Stelle
	if ((*stack_a)->next->num > vars->b_max) // Stack_a muss als neues Maximum an die erste Stelle von Stack_b
	{
		ft_sa(stack_a);
		ft_pb(stack_a, stack_b, vars); // sa && pb --> 2 Operationen
	}
	else if (ft_lstlast(*stack_a)->num > vars->b_max) // Stack_a muss als neues Maximum an die erste Stelle von Stack_b
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b, vars); // rra && pb --> 2 Operationen
	}
	// Min --> das neue Minimum von Stack_b ist an erster Stelle
	else if ((*stack_a)->next->num < vars->b_min)
	{
		ft_sa(stack_a);
		ft_pb(stack_a, stack_b, vars); // sa && pb --> 2 Operationen
	}
	else if(ft_lstlast(*stack_a)->num < vars->b_min) // Stack_a muss als neues Minimum an die erste Stelle von Stack_b
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b, vars); // rra & pb --> 2 Operationen
	}
	else
		return (2);
	return (-1);
}

int ft_start_of_stack_a(t_list **stack_a, t_list **stack_b, t_vars *vars)
{	
	if ((*stack_a)->num > vars->b_max) // Stack_a muss als neues Maximum an die erste Stelle von Stack_b
		ft_pb(stack_a, stack_b, vars); // pb --> 1 Operation
	else if((*stack_a)->num < vars->b_min) // Stack_a muss als neues Minimum an die erste Stelle von Stack_b
	{
		ft_pb(stack_a, stack_b, vars);
		ft_rb(stack_b); // pb && rb --> 2 Operationen
	}
	else if ((*stack_a)->num < (*stack_b)->num // Stack_a muss nach die erste Stelle von Stack_b
		&& (*stack_a)->num > (*stack_b)->next->num) // Stack_a muss vor die zweite Stelle von Stack_b
	{
		ft_pb(stack_a, stack_b, vars);
		ft_sb(stack_b); // pb && sb --> 2 Operationen
	}
	else
		return (2);
	return (-1);
}

void ft_algo_forward(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	if ((*stack_a)->num == 0)
		ft_pb(stack_a, stack_b, vars);
	while (vars->len_stack_a > 3 && vars->len_stack_b < 2) // idee: check if letzten vier schon sortiert
		ft_pb(stack_a, stack_b, vars);
	if (vars->len_stack_b == 2 && (*stack_b)->num < (*stack_b)->next->num)
		ft_rb(stack_b);
	while (ft_lstsize(*stack_a) > 3)
	{
		if (ft_start_of_stack_a(stack_a, stack_b, vars) != -1)
			if (ft_second_and_last_of_stack_a(stack_a, stack_b, vars) != -1)
			{
				ft_find_spot_in_b(stack_a, stack_b, vars->len_stack_b);
				ft_pb(stack_a, stack_b, vars); // es werden mehr als 2 Operationen gebraucht
			}
		ft_print_node(*stack_a, *stack_b);
	}
}