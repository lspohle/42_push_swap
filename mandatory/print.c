/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:16 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/06 14:17:22 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_node_one(t_list *stack_a)
{
	ft_printf("------------------------\n");
	ft_printf(GREEN"Stack_a		\n"ESC);
	ft_printf("------------------------\n");
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->num);
		stack_a = stack_a->next;
	}
}

void	ft_print_node(t_list *stack_a, t_list *stack_b)
{
	ft_printf("------------------------\n");
	ft_printf(GREEN"Stack_a		Stack_b\n"ESC);
	ft_printf("------------------------\n");
	while (stack_a || stack_b)
	{
		if (stack_a && stack_b)
		{
			ft_printf("%d		%d\n", stack_a->num, stack_b->num);
			stack_a = stack_a->next;
			stack_b = stack_b->next;
		}
		else if (stack_a)
		{
			ft_printf("%d\n", stack_a->num);
			stack_a = stack_a->next;
		}
		else if (stack_b)
		{
			ft_printf("		%d\n", stack_b->num);
			stack_b = stack_b->next;
		}	
	}
}
