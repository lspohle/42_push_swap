/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:19 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/15 01:47:49 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>

# define RA 1
# define RRA 2
# define RB 3
# define RRB 4

typedef enum e_bool
{
	false = 0,
	true = 1
}			t_bool;
typedef struct s_vars
{
	long	len_a;
	long	len_b;
	int		max_a;
	int		min_a;
	int		max_b;
	int		min_b;
}				t_vars;

// backward.c
void	ft_order_ascending(t_list **stack_a, t_vars *vars);
void	ft_sort_backward(t_list **stack_a, t_list **stack_b, t_vars *vars);
//checks.c
t_bool	ft_check_if_sorted(t_list *stack);
t_bool	ft_check_occurrence(t_list *stack_a, int num);
// operations.c
void	ft_swap(char *operation, t_list **stack);
void	ft_pa(t_list **stack_a, t_list **stack_b, t_vars *vars);
void	ft_pb(t_list **stack_a, t_list **stack_b, t_vars *vars);
void	ft_rotate(char *operation, t_list **stack);
void	ft_reverse_rotate(char *operation, t_list **stack);
// input.c
t_bool	ft_split_input(char *string_numbers, t_list **stack_a);
t_bool	ft_read_input(t_list **stack_a, char **argv, int i);
// forward.c
void	ft_sort_forward(t_list **stack_a, t_list **stack_b, t_vars *vars);
// utils_forward.c
int		ft_cnt_ops_in_a(t_list **stack_a, t_vars *vars, int num);
int		ft_cnt_ops_in_b(t_list **stack_b, t_vars *vars, int num_a);
void	ft_rotate_a(t_list **stack_a, t_vars *vars, int num_a);
void	ft_rotate_b(t_list **stack_b, t_vars *vars, int num_a);
void	ft_oder_last_three_spots(t_list **stack_a, t_vars *vars);

#endif