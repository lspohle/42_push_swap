/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:09 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 17:31:30 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_vars	*vars;

	stack_b = NULL;
	if (argc <= 1)
		return (0);
	if (ft_read_input(&stack_a, argv) == false)
		return (1);
	if (ft_check_if_sorted(stack_a, 'a') == true)
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	vars = (t_vars *) malloc (sizeof(t_vars));
	if (!vars)
		return (1);
	ft_bzero(vars, sizeof(t_vars));
	//ft_get_limits(stack_a, vars);
	ft_print_node(stack_a, stack_b);
	//algo für hinweg
	ft_algo_forward(&stack_a, &stack_b, vars);
	ft_print_node(stack_a, stack_b);
	//algo für rückweg
	if (ft_lstsize(stack_a) == 3)
		ft_stack_three(&stack_a, vars);
	while (stack_b)
	{	
		ft_find_spot_in_a(&stack_a, &stack_b, vars->len_stack_a);
		ft_pa(&stack_a, &stack_b, vars);
		ft_print_node(stack_a, stack_b);
	}
	ft_order_a(&stack_a, vars);
	ft_print_node(stack_a, stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	free(vars);
	return (0);
}
