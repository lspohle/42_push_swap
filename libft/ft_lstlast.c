/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:10:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:55:17 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as t_list *ft_lstlast(t_list *lst)
//  -> lst: the beginning of the list
//  -> returns the last node of the list
//  -> external functs: none
//  -> return: last node of the list

#include "libft.h"

// Returns the last node of the list
t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	while (len > 1)
	{
		lst = lst->next;
		len--;
	}
	return (lst);
}
