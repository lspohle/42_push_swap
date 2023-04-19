/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/19 20:13:52 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_swap(t_list **stack_a, t_list **stack_b, t_vars *vars)
{
	vars->len_a = ft_lstsize(*stack_a);
	vars->min_a = (*stack_a)->num;
	vars->max_a = (*stack_a)->num;
	ft_sort_forward(stack_a, stack_b, vars);
	while ((*stack_b))
		ft_sort_backward(stack_a, stack_b, vars);
	if (vars->len_a >= 3)
		ft_order_ascending(stack_a, vars);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	free(vars);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_vars	*vars;

	stack_b = NULL;
	if (argc < 2)
		return (0);
	else if ((argc == 2 && ft_split_input(argv[1], &stack_a) == false)
		|| (argc > 2 && ft_read_input(&stack_a, argv, 1) == false))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_check_ascending_order(stack_a) == true)
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	vars = (t_vars *)ft_calloc(1, sizeof(t_vars));
	if (!vars)
		return (1);
	ft_push_swap(&stack_a, &stack_b, vars);
	return (0);
}
