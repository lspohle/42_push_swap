/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:03:29 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/05 22:03:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	last = ft_lstlast(*stack_a);
	first = *stack_a;
	last->next = first;
	*stack_a = first->next;
	first->next = NULL;
	ft_printf(RED"ra\n"ESC);
}

void	ft_rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;

	last = ft_lstlast(*stack_b);
	first = *stack_b;
	last->next = first;
	*stack_b = first->next;
	first->next = NULL;
	ft_printf(RED"rb\n"ESC);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}
