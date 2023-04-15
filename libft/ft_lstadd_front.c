/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:43:54 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:46:43 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstadd_front(t_list **lst, t_list *new)
//  -> lst: the address of a pointer to the first link of a list
//  -> new: the address of a pointer to the node to be added to the list
//  -> adds the node ’new’ at the beginning of the list
//  -> external functs: none
//  -> return: none

#include "libft.h"

// Adds the node ’new’ at the beginning of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
