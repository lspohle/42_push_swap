/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 17:32:42 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_three(t_list **stack_a, t_vars *vars)
{
	t_bool	valid;

	valid = false;
	while (valid == false)
	{
		if ((*stack_a)->num < (*stack_a)->next->num
			&& (*stack_a)->next->num < (*stack_a)->next->next->num)
			valid = true;
		else if ((*stack_a)->num < (*stack_a)->next->num
			&& (*stack_a)->next->num > (*stack_a)->next->next->num)
			ft_rra(stack_a);
		else if ((*stack_a)->num > (*stack_a)->next->num
			&& (*stack_a)->num < (*stack_a)->next->next->num)
			ft_sa(stack_a);
		else if ((*stack_a)->num > (*stack_a)->next->num
			&& (*stack_a)->num > (*stack_a)->next->next->num)
			ft_ra(stack_a);
	}
	vars->a_min = (*stack_a)->num;
	vars->a_max = ft_lstlast(*stack_a)->num;
}

void	ft_find_spot_in_a(t_list **stack_a, t_list **stack_b, int len)
{
	int		count;
	t_list	*start_a;
	
	count = 1;
	start_a = *stack_a;
	while (start_a->next)
	{
		while ((*stack_a)->num > (*stack_b)->num
			&& (*stack_a)->num > ft_lstlast(*stack_a)->num
			&& ft_lstlast(*stack_a)->num > (*stack_b)->num)
			ft_rra(stack_a);
		if (start_a->num < (*stack_b)->num && start_a->next->num > (*stack_b)->num)
		{
			if (len - count > count)
				while (--count >= 0)
					ft_ra(stack_a);
			else
				while (++count <= len)
					ft_rra(stack_a);
			break ;
		}
		count++;
		start_a = start_a->next;
	}
}

void	ft_order_a(t_list **stack_a, t_vars *vars)
{
	int		count;
	t_list	*start_a;
	
	count = 0;
	start_a = *stack_a;
	if (start_a->num == vars->a_min)
		return ;
	while (start_a->num != vars->a_min)
	{
		count++;
		start_a = start_a->next;
	}
	if (ft_lstsize(*stack_a) - count > count)
		while (--count >= 0)
			ft_ra(stack_a);
	else
		while (++count <= ft_lstsize(*stack_a))
			ft_rra(stack_a);
}
