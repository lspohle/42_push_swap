/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:04:05 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/05 22:04:29 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lst_snd_last(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	while (len > 2)
	{
		lst = lst->next;
		len--;
	}
	return (lst);
}

void	ft_rra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;
	t_list	*snd_last;

	snd_last = ft_lst_snd_last(*stack_a);
	last = snd_last->next;
	first = *stack_a;
	last->next = first;
	snd_last->next = NULL;
	*stack_a = last;
	ft_printf(RED"rra\n"ESC);
}

void	ft_rrb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;
	t_list	*snd_last;

	snd_last = ft_lst_snd_last(*stack_b);
	last = snd_last->next;
	first = *stack_b;
	last->next = first;
	snd_last->next = NULL;
	*stack_b = last;
	ft_printf(RED"rrb\n"ESC);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}
