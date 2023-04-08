/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:25:49 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:59:21 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstadd_back(t_list **lst, t_list *new)
//  -> lst: the address of a pointer to the first link of a list
//  -> new: the address of a pointer to the node to be added to the list
//  -> adds the node ’new’ at the end of the list
//  -> external functs: none
//  -> return: none

#include "libft.h"

// Adds the node ’new’ at the end of the list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else if (new != NULL)
		ft_lstlast(*lst)->next = new;
}
