/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:36:52 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/14 22:11:05 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_bzero(void *s, size_t n);
long	ft_atol(const char *str);
size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(const char *str, char c);
void	ft_free_dbl_ptr(char **array);
typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;
t_list	*ft_lstnew(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst);
void	ft_lstclear(t_list **lst);
t_list	*ft_lstsndlast(t_list *lst);
int		ft_printf(const char *str, ...);
void	ft_print_nodes(t_list *stack_a, t_list *stack_b);

#endif
