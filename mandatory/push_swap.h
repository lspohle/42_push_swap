/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:19 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/08 18:24:31 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>

# define CYAN "\e[38;5;51m"
# define GREEN "\e[38;5;47m"
# define PURPLE "\e[38;5;219m"
# define RED "\e[38;5;196m*"
# define ESC "\033[0m"

# define RA 1
# define RRA 2

typedef enum e_bool
{
	false = 0,
	true = 1
}			t_bool;
typedef struct s_vars
{
	long	len_stack_a;
	long	len_stack_b;
	int		a_max;
	int		a_min;
	int		b_max;
	int		b_min;
}				t_vars;

//algo_back.c
void	ft_stack_three(t_list **stack_a, t_vars *vars);
void	ft_find_spot_in_a(t_list **stack_a, t_list **stack_b);
void	ft_order_a(t_list **stack_a, t_vars *vars);
//algo_forward.c
int		ft_second_and_last_of_stack_a(t_list **stack_a, t_list **stack_b, t_vars *vars);
int		ft_start_of_stack_a(t_list **stack_a, t_list **stack_b, t_vars *vars);
void	ft_algo_forward(t_list **stack_a, t_list **stack_b, t_vars *vars);
//checks.c
t_bool	ft_check_if_sorted(t_list *stack, char order);
// swap.c
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
// push.c
void	ft_pa(t_list **stack_a, t_list **stack_b, t_vars *vars);
void	ft_pb(t_list **stack_a, t_list **stack_b, t_vars *vars);
// rotate.c
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
// reverse_rotate.c
t_list	*ft_lst_snd_last(t_list *lst);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
// input.c
void	ft_get_limits(t_list *stack_a, t_vars *vars);
t_bool	ft_check_occurrence(t_list *stack_a, int num);
t_bool	ft_read_input(t_list **stack_a, char **argv);
// print.c
void	ft_print_node_one(t_list *stack_a);
void	ft_print_node(t_list *stack_a, t_list *stack_b);

#endif