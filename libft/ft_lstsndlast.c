/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsndlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:16:16 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/14 21:16:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the second last node of the list
t_list	*ft_lstsndlast(t_list *lst)
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
