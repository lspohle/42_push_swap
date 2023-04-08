/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:03 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 15:36:55 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_get_limits(t_list *stack_a, t_vars *vars)
// {
// 	if (stack_a)
// 	{
// 		vars->a_min = stack_a->num;
// 		vars->a_max = stack_a->num;
// 	}
// 	while (stack_a)
// 	{
// 		if (stack_a->num < vars->a_min)
// 			vars->a_min = stack_a->num;
// 		else if(stack_a->num > vars->a_max)
// 			vars->a_max = stack_a->num;
// 		stack_a = stack_a->next;
// 		vars->len_stack_a++;
// 	}
// }

t_bool	ft_check_occurrence(t_list *stack_a, int num)
{
	while (stack_a)
	{
		if (stack_a->num == num)
			return (false);
		stack_a = stack_a->next;
	}		
	return (true);
}

t_bool	ft_read_input(t_list **stack_a, char **argv)
{
	int			i;
	long int	num;
	t_list		*temp;

	i = 1;
	num = ft_atol(argv[i]);
	if ((num == 0 && argv[i][0] != '0') || (num < INT_MIN || num > INT_MAX))
		return (false);
	*stack_a = ft_lstnew((int)num);
	if (!(*stack_a))
		return (false);
	while (argv[++i])
	{
		num = ft_atol(argv[i]);
		if ((num == 0 && argv[i][0] != '0') || (num < INT_MIN || num > INT_MAX)
			|| ft_check_occurrence(*stack_a, (int) num) == false)
			return (false);
		temp = ft_lstnew((int)num);
		if (!temp) //make sure stack gets cleaned if fail
			return (false);
		ft_lstadd_back(stack_a, temp);
	}
	return (true);
}
