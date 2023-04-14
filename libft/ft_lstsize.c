/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:57:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:57:54 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as int ft_lstsize(t_list *lst)
//  -> lst: the beginning of the list
//  -> counts the number of nodes in a list
//  -> external functs: none
//  -> return: the length of the list

#include "libft.h"

// Counts the number of nodes in a list
int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
