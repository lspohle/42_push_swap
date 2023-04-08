/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/06 15:49:52 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	ft_check_if_sorted(t_list *stack, char order)
{
	if (!stack)
		return (false);
	while (stack->next)
	{
		if (order == 'a' && stack->num > stack->next->num)
			return (false);
		if (order == 'd' && stack->num < stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}
