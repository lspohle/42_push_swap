/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_forward.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:06:51 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 17:06:53 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (vars->len_stack_a > 3 && vars->len_stack_b < 2) // check if letzten vier schon sortiert
		ft_pb(stack_a, stack_b, vars);
	if (vars->len_stack_b == 2 && (*stack_b)->num < (*stack_b)->next->num)
		ft_rb(stack_b);
	while (ft_lstsize(*stack_a) > 3)
	{
		if (ft_start_of_stack_a(stack_a, stack_b, vars) != -1)
			if (ft_second_and_last_of_stack_a(stack_a, stack_b, vars) != -1)
				exit (42); // es werden mehr auf jeden Fall mehr als 2 Operationen gebraucht
		ft_print_node(*stack_a, *stack_b);
	}
}