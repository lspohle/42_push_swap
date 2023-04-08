/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:17:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/05 22:05:06 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;

	first = *stack_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	ft_printf(RED"sa\n"ESC);
}

void	ft_sb(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;

	first = *stack_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	ft_printf(RED"sb\n"ESC);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}
