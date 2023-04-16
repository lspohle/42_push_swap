/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:17:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/15 00:42:29 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(char *operation, t_list **stack)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	ft_printf("%s\n", operation);
}

void	ft_push_a(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	t_list	*first;

	if ((*stack_b)->num > vars->max_a)
		vars->max_a = (*stack_b)->num;
	if ((*stack_b)->num < vars->min_a)
		vars->min_a = (*stack_b)->num;
	first = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b = first;
	vars->len_a++;
	vars->len_b--;
	ft_printf("pa\n");
}

void	ft_push_b(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	t_list	*first;

	if (!(*stack_b) || (*stack_a)->num > vars->max_b)
		vars->max_b = (*stack_a)->num;
	if (!(*stack_b) || (*stack_a)->num < vars->min_b)
		vars->min_b = (*stack_a)->num;
	first = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = first;
	vars->len_a--;
	vars->len_b++;
	ft_printf("pb\n");
}

void	ft_rotate(char *operation, t_list **stack)
{
	t_list	*first;
	t_list	*last;

	last = ft_lstlast(*stack);
	first = *stack;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
	ft_printf("%s\n", operation);
}

void	ft_reverse_rotate(char *operation, t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*snd_last;

	snd_last = ft_lstsndlast(*stack);
	last = snd_last->next;
	first = *stack;
	last->next = first;
	snd_last->next = NULL;
	*stack = last;
	ft_printf("%s\n", operation);
}
