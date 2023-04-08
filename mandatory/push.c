/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:04:49 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 20:08:36 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	t_list	*first;

	if ((*stack_b)->num < vars->a_min)
		vars->a_min = (*stack_b)->num;
	if ((*stack_b)->num > vars->a_max)
		vars->a_max = (*stack_b)->num;
	first = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b = first;
	vars->len_stack_a++;
	vars->len_stack_b--;
	ft_printf(RED"pa\n"ESC);
}

void	ft_pb(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	t_list	*first;

	if (!(*stack_b) || (*stack_a)->num < vars->b_min)
		vars->b_min = (*stack_a)->num;
	if (!(*stack_b) || (*stack_a)->num > vars->b_max)
		vars->b_max = (*stack_a)->num;
	first = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = first;
	vars->len_stack_a--;
	vars->len_stack_b++;
	ft_printf(RED"pb\n"ESC);
}
